#ifndef SCHEDULINGALGORITHMS_H_INCLUDED
#define SCHEDULINGALGORITHMS_H_INCLUDED
#include<iostream>
#include<string>
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
    void set_process()
    {

       int minimum;
       int index ;
       int temp_burst;
       string temp_name;
       cout << "enter no of processes"<<endl;
       cin>>n;
       for(int i = 0;i < n;i++)
       {
           cout<<"Enter Process Name: "<<endl;
           cin>>name[i];
           cout<<"Enter Process Burst time: "<<endl;
           cin>>Burst_time[i];
       }
     }
  void display()
  {
      int startOfProcess = 0;
      int endOfProcess;
    for(int i = 0;i < n;i++)
    {
        endOfProcess = startOfProcess + Burst_time[i];
        cout<<endl<<name[i] <<"\t"<<"From  "<<startOfProcess << "  to  "<<endOfProcess<<endl;
        startOfProcess = endOfProcess;
    }
  }
};
class SJF :public Process
{
    void set_process()
    {

       int minimum;
       int index ;
       int temp_burst;
       string temp_name;
       cout << "enter no of processes"<<endl;
       cin>>n;
       for(int i = 0;i < n;i++)
       {
           cout<<"Enter Process Name: "<<endl;
           cin>>name[i];
           cout<<"Enter Process Burst time: "<<endl;
           cin>>Burst_time[i];
       }

        for(int i = 0;i < n;i++)
        {
            minimum = Burst_time[i];
            index = i;
            for(int j = i + 1;j < n;j++)
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
    for(int i = 0;i < n;i++)
    {
        endOfProcess = startOfProcess + Burst_time[i];
        cout<<endl<<name[i] <<"\t"<<"From  "<<startOfProcess << "  to  "<<endOfProcess<<endl;
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
       int index ;
       int temp_burst;
       string temp_name;
       cout << "enter no of processes"<<endl;
       cin>>n;
       for(int i = 0;i < n;i++)
       {
           cout<<"Enter Process Name: "<<endl;
           cin>>name[i];
           cout<<"Enter Process Burst time: "<<endl;
           cin>>Burst_time[i];
           cout<< "Enter Process Priority"<<endl;
           cin>>Priority[i];
       }

        for(int i = 0;i < n;i++)
        {
            minimum = Priority[i];
            index = i;
            for(int j = i + 1;j < n;j++)
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
    for(int i = 0;i < n;i++)
    {
        endOfProcess = startOfProcess + Burst_time[i];
        cout<<endl<<name[i] <<"\t"<<"From  "<<startOfProcess << "  to  "<<endOfProcess<<endl;
        startOfProcess = endOfProcess;
    }
  }
};
class Preemptive_priority :public Process
{
    int s;
    int startOfslot ;
    int endOfslot ;
    int Priority[10];
    int remaining_time[10];
    int arrival_time[10];
public:
    Preemptive_priority()
    {

         startOfslot = 0;
    }
    void set_process()
  {

       int minimum;//max in priority
       int index ;
       int temp_burst;
       string temp_name;
       cout << "enter no of processes"<<endl;
       cin>>n;
       for(int i = 0;i < n;i++)
       {
           cout<<"Enter Process Name: "<<endl;
           cin>>name[i];
           cout<<"Enter Process arrival time: "<<endl;
           cin>>arrival_time[i];
           cout<<"Enter Process Burst time: "<<endl;
           cin>>Burst_time[i];
           cout<< "Enter Process Priority"<<endl;
           cin>>Priority[i];
       }
       for(int x = 0;x < n;x++)
        {
           temp_burst = Burst_time[x] - arrival_time[x+1];
           Burst_time[x] = temp_burst;
         display_prio(x);
           arrival_time[x] = arrival_time[x+1];


            for(int i = 0;i < 1;i++)
            {
                minimum = Priority[i];
                index = i;
                    if (minimum > Priority[i+1])
                        {
                            minimum = Priority[i+1];
                            index = i+1;
                        }

                temp_name = name[i];
                temp_burst = Burst_time[i];
                name[i] = name[index];
                Burst_time[i] = Burst_time[index];
                name[index] = temp_name;
                Burst_time[index] = temp_burst;
            }

       }
       startOfslot = 0;
  }
//   cout<<"Enter Arrival Time: ";
//   cin>>Arrival_time;
   //Remaing_time=Burst_time;

  void display()
  {

        endOfslot = startOfslot + Burst_time[s];
        cout<<endl<<name[s] <<"\t"<<"From  "<< startOfslot << "  to  " << endOfslot <<endl;
        startOfslot = endOfslot;
      s++;
  }
  void display_prio(int z)
  {
      endOfslot = startOfslot + Burst_time[z];
        cout<<endl<<name[z] <<"\t"<<"From  "<< startOfslot << "  to  " << endOfslot <<endl;
        startOfslot = endOfslot;
  }
};

#endif // SCHEDULINGALGORITHMS_H_INCLUDED
