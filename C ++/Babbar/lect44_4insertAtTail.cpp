#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    //constructor
    node(int data){
        this -> data =data;
        this -> next = NULL;
    }
};

void insertAtTail(node* &tail, int d){
    //create new node
    node* temp = new node(d);
    tail -> next = temp;
    tail = temp;
}

void print(node* &head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp -> data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

int main(){
    node* node1 = new node(10);

    node* tail = node1;
    node* head = node1;

    print(head);

    insertAtTail(tail,15);
    print(head);

    insertAtTail(tail,20);
    print(head);   

    insertAtTail(tail,25);
    print(head);
}