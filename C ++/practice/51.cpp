#include<iostream>
using namespace std;

class node{
    public:
    int data ;
    node* next;

    //constructor
    node(int data){
        this->data = data;
        this->next = NULL;
    }
};

node* reversell(node* head){
    if(head == NULL || head->next ==NULL)   return head;

    node* prev = NULL;
    node* curr = head;
    node* frwd = NULL;

    while(curr!=NULL){
        frwd = curr->next;
        curr->next = prev;
        prev = curr;
        curr = frwd; 
    }
    return prev;
}