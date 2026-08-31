#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    //constructor
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};

node* getMiddle(node* head){
    //empty or one node
    if(head == NULL || head->next == NULL){
        return head;
    }
    //2 nodes
    if(head->next->next==NULL){
        return head->next;
    }
    node* slow = head;
    node* fast = head;
    while(fast!=NULL){
        fast = fast->next;
        if(fast!= NULL){
            fast=fast->next;
        }
        slow = slow->next;
    }
    return slow;
}
node *findMiddle(node *head){
    return getMiddle(head);
} 