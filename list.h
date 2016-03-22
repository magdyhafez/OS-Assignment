#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED

#include<iostream>
#include <cstdlib>
#include "Node.h"
#include <string>
using namespace std;
class linkedlist {
private:
	stackNode* head;
	int capacity;
	stackNode* HeadOfnode;
public:
	linkedlist();
	void add_atFront(string name, int, int);
	void add_atEnd(string name, int, int);
	int GetlistTop();
	int Getcapacity();
	void remove_front();
	void printall();
	bool islistEmpty();
	void clearlist();
	void PutminOnTop();
	void IterateToNextNodeOfList();
	void SetBurstTimeOfCurrentNode(int);
	void CopyToItData(string name, int, int);
	int GetBurstTimeOfCurrentNode();
	string GetNameOfCurrentNode();
	int GetArrivalTimeOfCurrentNode();
	int GetArrivalTimeOfNextNode();
	void SetArrivalTime(int index, int t);
	int GetArrivalTime(int index);
	void SetArrivalTimeOfCurrentNode(int newArrivalTime);
	int GetBurstTime(int index);
	void SetBurstTime(int index, int t);
	string GetProcessName(int index);
	void SetProcessName(int index, string name);
	//        stackNode* GetlistHead();
	//        int GetbursttimeOfnodeOfList()
};

linkedlist::linkedlist() {
	head = NULL;
	HeadOfnode = NULL;
	capacity = 0;
}
void linkedlist::IterateToNextNodeOfList()
{
	if ((!(islistEmpty())))
	{
		HeadOfnode = HeadOfnode->next;
	}
}
void linkedlist::SetBurstTimeOfCurrentNode(int newburstTime)
{
	HeadOfnode->Burst_time = newburstTime;
}
void linkedlist::CopyToItData(string name, int newburstTime, int arrival)
{
	HeadOfnode->process_name = name;
	HeadOfnode->Burst_time = newburstTime;
	HeadOfnode->arrival_time = arrival;
}
int linkedlist::GetBurstTimeOfCurrentNode()
{
	return HeadOfnode->Burst_time;
}
string linkedlist::GetNameOfCurrentNode()
{
	return HeadOfnode->process_name;
}
int linkedlist::GetArrivalTimeOfCurrentNode()
{
	return HeadOfnode->arrival_time;
}
int linkedlist::GetArrivalTimeOfNextNode()
{
	//stackNode* temp = HeadOfnode->next;
	//return temp->arrival_time;
	if (capacity > 1)
		return HeadOfnode->next->arrival_time;
	else
		return -1;// no node to get arrival time of // so we get arrival if capacity != 1 
}

void linkedlist::add_atFront(string name, int Burst, int arrival) {
	stackNode* temp = new stackNode(name, Burst, arrival);
	temp->next = head;
	head = temp;
	HeadOfnode = head;
	capacity++;
}
void linkedlist::add_atEnd(string name, int Burst, int arrival) {
	if (islistEmpty())
		add_atFront(name, Burst, arrival);// bug if no item fixed
	else {
		stackNode* temp;
		for (temp = head; temp->next != NULL; temp = temp->next);
		temp->next = new stackNode(name, Burst, arrival);
		capacity++;
	}
}

int linkedlist::GetlistTop() {
	if (!islistEmpty())
		return head->Burst_time;
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
		capacity--;
	}
}

void linkedlist::printall()
{
	stackNode* temp = head;
	while (temp != NULL)
	{
		cout << temp->Burst_time << endl;
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
void linkedlist::PutminOnTop()
{
	int temp_oldBurst;
	string temp_oldName;
	int temp_oldarrival;
	stackNode* temp = head;
	int minimum;
	if (!islistEmpty()) {
		minimum = temp->Burst_time;
		while (temp->next != NULL)
		{

			temp = temp->next;
			if (minimum > temp->Burst_time)
			{
				temp_oldBurst = head->Burst_time;
				temp_oldName = head->process_name;
				temp_oldarrival = head->arrival_time;
				head->Burst_time = temp->Burst_time;//temp->Burst_time is the minimum
				head->process_name = temp->process_name;
				head->arrival_time = temp->arrival_time;
				temp->Burst_time = temp_oldBurst;
				temp->process_name = temp_oldName;
				temp->arrival_time = temp_oldarrival;
			}

		}
	}
}
void linkedlist::SetArrivalTimeOfCurrentNode(int newArrivalTime)
{
	HeadOfnode->arrival_time = newArrivalTime;
}
void linkedlist::SetArrivalTime(int index, int t)
{
	HeadOfnode = head;
	for (int i = 0; i < index; i++)
	{
		HeadOfnode = HeadOfnode->next;
	}
	SetArrivalTimeOfCurrentNode(t);
}
int linkedlist::GetArrivalTime(int index)
{
	HeadOfnode = head;
	for (int i = 0; i < index; i++)
	{
		HeadOfnode = HeadOfnode->next;
	}
	return GetArrivalTimeOfCurrentNode();
}
int linkedlist::GetBurstTime(int index)
{
	HeadOfnode = head;
	for (int i = 0; i < index; i++)
	{
		HeadOfnode = HeadOfnode->next;
	}
	return GetBurstTimeOfCurrentNode();
}
void linkedlist::SetBurstTime(int index, int t)
{
	HeadOfnode = head;
	for (int i = 0; i < index; i++)
	{
		HeadOfnode = HeadOfnode->next;
	}
	SetBurstTimeOfCurrentNode(t);
}
string linkedlist::GetProcessName(int index)
{
	HeadOfnode = head;
	for (int i = 0; i < index; i++)
	{
		HeadOfnode = HeadOfnode->next;
	}
	return HeadOfnode->process_name;
}
void linkedlist::SetProcessName(int index, string name)
{
	HeadOfnode = head;
	for (int i = 0; i < index; i++)
	{
		HeadOfnode = HeadOfnode->next;
	}
	HeadOfnode->process_name = name;
}
#endif // LIST_H_INCLUDED


