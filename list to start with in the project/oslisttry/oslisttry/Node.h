#ifndef NODE_H_INCLUDED
#define NODE_H_INCLUDED
#include <iostream>
#include <string>
using namespace std;
class stackNode{
    private:
        stackNode* next;
		string process_name ;
        int Burst_time;       
        int arrival_time;
    public:
        stackNode(string,int,int);//name  Burst   arrival
        void setdata(string,int,int);
        void setptr_node(stackNode*);
        int GetBurstTime();
        stackNode* Getptr_node();
friend class linkedlist;
};
        stackNode::stackNode(string name,int Burst,int arrival){
        Burst_time = Burst;
        process_name = name;
        arrival_time = arrival;
        next = NULL;
    }
    void stackNode::setdata(string name,int Burst,int arrival){
        Burst_time = Burst;
        process_name = name;
        arrival_time = arrival;
    }
    void stackNode::setptr_node(stackNode* ptr_node){
        next = ptr_node;
    }
    int stackNode::GetBurstTime(){
        return Burst_time;
    }
    stackNode* stackNode::Getptr_node(){
        return next;
    }



#endif // NODE_H_INCLUDED

