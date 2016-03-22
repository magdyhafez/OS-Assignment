#include<iostream>
#include <cstdlib>
#include "Node.h"
using namespace std;
class linkedlist {
private:
	stackNode* head;
	int capacity;
public:
	linkedlist();
	void add_atFront(int);
	void add_atEnd(int);
	int GetlistTop();
	int Getcapacity();
	void remove_front();
	void printall();
	bool islistEmpty();
	void clearlist();
	int Getmin();
};

linkedlist::linkedlist() {
	head = NULL;
	capacity = 0;
}
void linkedlist::add_atFront(int value) {
	capacity++;
	stackNode* temp = new stackNode(value);
	temp->next = head;
	head = temp;
}
void linkedlist::add_atEnd(int value) {
	if (islistEmpty())
		add_atFront(value);// bug if no item fixed
	else {
		stackNode* temp;
		for (temp = head; temp->next != NULL; temp = temp->next);
		temp->next = new stackNode(value);
	}
	capacity++;
}

int linkedlist::GetlistTop() {
	if (!islistEmpty())
		return head->data;
}
int linkedlist::Getcapacity()
{
	return capacity;
}
void linkedlist::remove_front() {
	stackNode* temp;
	if (!islistEmpty())
	{
		temp = head;
		head = head->next;
		delete temp;
	}
	capacity--;
}

void linkedlist::printall()
{
	stackNode* temp = head;
	while (temp != NULL)
	{
		cout << temp->data << endl;
		temp = temp->next;
	}
}

bool linkedlist::islistEmpty()
{
	return (head == NULL) ? true : false;
}
void linkedlist::clearlist() {
	while (!islistEmpty())
		remove_front();
	capacity = 0;
}
int linkedlist::Getmin()
{
	stackNode* minimumnode = head;//minimum current node
	int temp_oldmin;
	stackNode* temp = head;
	int minimum = temp->data;
	if (!islistEmpty()) {
		while (temp->next != NULL)
		{

			temp = temp->next;
			if (minimum > temp->data)
			{
				temp_oldmin = head->data;
				head->data = temp->data;
				temp->data = temp_oldmin;
			}
			minimumnode = minimumnode->next;
		}
	}
	return minimum;

}