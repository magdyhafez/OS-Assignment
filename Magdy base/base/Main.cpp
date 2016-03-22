// base.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include "SchedulingAlgorithms.h"
//#include "Priority.h"
#include <cstdlib>
using namespace std;
void clrscr();
int main()
{
	char stop = 'c';
	int algorithm;
	while (stop == 'c' || stop == 'C')
	{
		Process *p;
		p = nullptr;
		priority pr;
		SJF s;
		FCFS f;
		cout << "which algorithm you want to use:" << endl;
		cout << "1.SJF 2.Priority 3.FCFS" << endl << "press the no corresponding to the algorithm:" << endl;
		cin >> algorithm;
		if (algorithm == 2)
			p = &pr;
		else if (algorithm == 1)
			p = &s;
		else if (algorithm == 3)
			p = &f;
		clrscr();
		p->set_process();
		p->display();
		cout << "if you want to continue enter c for continue else enter enter e for exit" << endl;
		cin >> stop;
		//system("clear"); or
		clrscr();
	}
	return 0;
}
void clrscr()
{
	cout << flush;
}
