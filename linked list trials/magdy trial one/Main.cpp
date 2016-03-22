// magdy trial one.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
//#include "SchedulingAlgorithms.h"
#include <cstdlib>
#include "list.h"
using namespace std;
void clrscr();
int main()
{
	linkedlist l;
	//    l.add_atFront(1);
	//    l.add_atFront(2);
	//    l.add_atFront(3);
	//    l.add_atFront(4);  // reversed order
	l.add_atEnd(5);
	l.add_atEnd(4);
	l.add_atEnd(3);
	l.add_atEnd(2);
	l.add_atEnd(1);  //   same order
	l.printall();
	l.Getmin();
	//    l.sortBursttimes();
	//    cout << "the sorted list"<<endl<<endl<<l.Getmin();;
	cout << "after sort" << endl;
	//l.printall();
	//l.sorting();
	l.printall();
	l.remove_front();
	cout << endl;
	l.Getmin();
	l.printall();
	l.clearlist();
	system("Pause");

	//    char stop = 'c';
	//    int algorithm;
	//    while(stop == 'c' || stop == 'C')
	//    {
	//        Process *p;
	//        priority pr;
	//        SJF s;
	//        FCFS f;
	//      //  Preemptive_priority pp;
	//        cout<< "which algorithm you want to use:"<<endl;
	//        cout<<"1.SJF 2.Priority 3.FCFS 4.prioPremp"<<endl<<"press the no corresponding to the algorithm:"<<endl;
	//        cin>>algorithm;
	//        if(algorithm == 2)
	//            p = &pr;
	//        else if (algorithm == 1)
	//            p = &s;
	//        else if (algorithm == 3)
	//            p = &f;
	////        else if(algorithm == 4)
	////            p = &pp;
	//        clrscr();
	//        p->set_process();
	//        p->display();
	//        cout<< "if you want to continue enter c for continue else enter enter e for exit"<<endl;
	//        cin>>stop;
	//        //system("clear"); or
	//        clrscr();
	//    }
	return 0;
}
void clrscr()
{
	cout << "\033[2J\033[1;1H";
}
/*    linkedlist l ;
//    l.add_atFront(1);
l.add_atFront(2);
l.add_atFront(3);
l.add_atFront(4);   reversed order
//  l.add_atEnd(1);
l.add_atEnd(2);
l.add_atEnd(3);
l.add_atEnd(4);     same order
l.printall();
l.clearlist();   */


