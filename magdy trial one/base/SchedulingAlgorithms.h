#include<iostream>
#include<string>
#include "list.h"
using namespace std;
class Process
{


	//,Arrival_time,Remaing_time;
protected:
	int n;
	string name[10];
	int Burst_time[10];
public:
	virtual void set_process() = 0;
	virtual void display() = 0;
};
class FCFS :public Process
{
	linkedlist process;
	void set_process()
	{

		int minimum;
		int index;
		int temp_burst;
		string temp_name;
		cout << "enter no of processes" << endl;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			string name;
			int burst_time;
			cout << "Enter Process Name: " << endl;
			cin >>name;			
			cout << "Enter Process Burst time: " << endl;
			cin >> burst_time;
			process.add_atEnd(name, burst_time, 0);
			
		}
	}
	void display()
	{
		int startOfProcess = 0;
		int endOfProcess;
		for (int i = 0; i < n; i++)
		{
			endOfProcess = startOfProcess + process.GetBurstTime(i);
			cout << endl << process.GetProcessName(i) << "\t" << "From  " << startOfProcess << "  to  " << endOfProcess << endl;
			startOfProcess = endOfProcess;
		}
	}
};
class SJF :public Process
{
	void set_process()
	{

		int minimum;
		int index;
		int temp_burst;
		string temp_name;
		cout << "enter no of processes" << endl;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cout << "Enter Process Name: " << endl;
			cin >> name[i];
			cout << "Enter Process Burst time: " << endl;
			cin >> Burst_time[i];
		}

		for (int i = 0; i < n; i++)
		{
			minimum = Burst_time[i];
			index = i;
			for (int j = i + 1; j < n; j++)
			{
				if (minimum > Burst_time[j])
				{
					minimum = Burst_time[j];
					index = j;
				}
			}
			temp_name = name[i];
			temp_burst = Burst_time[i];
			name[i] = name[index];
			Burst_time[i] = Burst_time[index];
			name[index] = temp_name;
			Burst_time[index] = temp_burst;
		}
		//   cout<<"Enter Arrival Time: ";
		//   cin>>Arrival_time;
		//Remaing_time=Burst_time;
	}
	void display()
	{
		int startOfProcess = 0;
		int endOfProcess;
		for (int i = 0; i < n; i++)
		{
			endOfProcess = startOfProcess + Burst_time[i];
			cout << endl << name[i] << "\t" << "From  " << startOfProcess << "  to  " << endOfProcess << endl;
			startOfProcess = endOfProcess;
		}
	}
};
class priority :public Process
{
	int Priority[10];
public:
	void set_process()
	{

		int minimum;//max in priority
		int index;
		int temp_burst;
		string temp_name;
		cout << "enter no of processes" << endl;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cout << "Enter Process Name: " << endl;
			cin >> name[i];
			cout << "Enter Process Burst time: " << endl;
			cin >> Burst_time[i];
			cout << "Enter Process Priority" << endl;
			cin >> Priority[i];
		}

		for (int i = 0; i < n; i++)
		{
			minimum = Priority[i];
			index = i;
			for (int j = i + 1; j < n; j++)
			{
				if (minimum > Priority[j])
				{
					minimum = Priority[j];
					index = j;
				}
			}
			temp_name = name[i];
			temp_burst = Burst_time[i];
			name[i] = name[index];
			Burst_time[i] = Burst_time[index];
			name[index] = temp_name;
			Burst_time[index] = temp_burst;
		}
		//   cout<<"Enter Arrival Time: ";
		//   cin>>Arrival_time;
		//Remaing_time=Burst_time;
	}
	void display()
	{
		int startOfProcess = 0;
		int endOfProcess;
		for (int i = 0; i < n; i++)
		{
			endOfProcess = startOfProcess + Burst_time[i];
			cout << endl << name[i] << "\t" << "From  " << startOfProcess << "  to  " << endOfProcess << endl;
			startOfProcess = endOfProcess;
		}
	}
};