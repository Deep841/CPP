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

void insertAtHead(node* &head, int d){

    //new node create
    node* temp = new node(d);
    temp -> next = head;
    head = temp;
}

void print(node* &head,)