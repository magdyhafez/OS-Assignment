#include <iostream>
#include <string>
#include "List.h"
using namespace std;
int main()
{
	string name;
	int b;
	int a;
	linkedlist l;
	cout << "hello world" << endl;
	l.add_atEnd("mohamed",7,5);
	l.add_atEnd("magdy",4,-7);
	l.add_atEnd("sherif",3,5);
	l.add_atEnd("ahmed",0,5);
	//cout<<"cap"<<l.Getcapacity();
	/*while(!l.islistEmpty()){
	cout<<"name:"<<l.GetNameOfCurrentNode()<< "burst:"<<l.GetBurstTimeOfCurrentNode()<<"arrival:"<<l.GetArrivalTimeOfCurrentNode()<<endl;
	cout<<"arrival of next node:"<<l.GetArrivalTimeOfNextNode()<<endl;
	l.IterateToNextNodeOfList();
	l.remove_front();}
	cout<<"cap"<<l.Getcapacity();}*/
	cout<<"name:"<<l.GetNameOfCurrentNode()<< "burst:"<<l.GetBurstTimeOfCurrentNode()<<"arrival:"<<l.GetArrivalTimeOfCurrentNode()<<endl;
	name = l.GetNameOfCurrentNode();
	b = l.GetBurstTimeOfCurrentNode();
	a = l.GetArrivalTimeOfCurrentNode();
	l.IterateToNextNodeOfList();//now i am on next node
	l.CopyToItData(name,b,a);
	cout<<"i copied the value of first node to second node"<<endl;
	cout<<"name:"<<l.GetNameOfCurrentNode()<< "burst:"<<l.GetBurstTimeOfCurrentNode()<<"arrival:"<<l.GetArrivalTimeOfCurrentNode()<<endl;
	l.SetBurstTimeOfCurrentNode(50);
	cout<<"i changed the burst time of second node"<<endl;
	cout<<"name:"<<l.GetNameOfCurrentNode()<< "burst:"<<l.GetBurstTimeOfCurrentNode()<<"arrival:"<<l.GetArrivalTimeOfCurrentNode()<<endl;
	l.printall();// printing burst time of all nodes
/*	cout << "list is empty:"<<l.islistEmpty()<<endl;//working
	l.remove_front();//working
	cout << l.GetlistTop()<<"burst of top"<<endl;
	//cout<<"size of list:  "<<l.Getcapacity()<<endl;//is working
	l.PutminOnTop();//working
	cout << l.GetlistTop()<<"burst of top"<<endl;
	l.printall();// so add_atEnd is working
	l.clearlist();// is working
	cout << "list is empty:"<<l.islistEmpty()<<endl;
	//cout << l.Getcapacity()<<endl;  */
	//	l.printall();// so add_atEnd is working
	l.clearlist();// is working
system("pause");
return 0;
}