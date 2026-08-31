#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    //constructor
    node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

void insertAtHead(node* &head,int d){
    node* temp = new node(d);
    temp -> next = head;
    head= temp;
}

void insertAtTail(node* &tail,int d){
    node* temp = new node(d);
    tail -> next = temp;
    tail = temp;
}

void print(node* &head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp -> data<<" ";
    }
    cout<<endl;
}

void insertAtNode(node* &tail, node* &head,int position,int d){

}