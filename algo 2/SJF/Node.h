#ifndef NODE_H_INCLUDED
#define NODE_H_INCLUDED

class stackNode{
    private:
        stackNode* next;
        int data;
    public:
        stackNode(int);
        void setdata(int);
        void setptr_node(stackNode*);
        int Getdata();
        stackNode* Getptr_node();
friend class linkedlist;
};
        stackNode::stackNode(int value){
        data = value;
        next = NULL;
    }
    void stackNode::setdata(int value){
        data = value;
    }
    void stackNode::setptr_node(stackNode* ptr_node){
        next = ptr_node;
    }
    int stackNode::Getdata(){
        return data;
    }
    stackNode* stackNode::Getptr_node(){
        return next;
    }



#endif // NODE_H_INCLUDED
