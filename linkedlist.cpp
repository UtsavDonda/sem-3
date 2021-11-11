#include<iostream>
using namespace std;
class Node{
public:
    int value;
    Node* next;
    Node(int v){
        value=v;
        next = NULL;
    }

//functionsk

    void connect(Node* nextNode)
    {
        next = nextNode;
    }
    void display(){
        Node* tmp=this;
        while(tmp->next != NULL)
        {
            tmp=tmp->next;
            cout<<tmp->value;
        }
    }
};

int main(){
    Node* n1 = new Node(1);
    Node* n2 = new Node(2);
    Node* n4 = new Node(4);


    n1->connect(n2);
    n2->connect(n4);
    n1->display();
    return 0;
}

/*
Node is Object of value and address
requirement = [1,2,4]
1. main function ma jetli requirement hati te lakhi nakhi
*/