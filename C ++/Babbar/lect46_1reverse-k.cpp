#include<iostream>
using namespace std;

class node{
    public: 
    int data;
    node* next = NULL;

    //constructor
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};

node* kreverse(node* head, int k){
    //base call
    if(head==NULL){
        return head;
    }

    //step1: reverse first k nodes
    node* next = NULL;
    node* curr = head;
    node* prev = NULL;
    int cnt = 0;

    while(curr!=NULL && cnt < k){
        next = curr ->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        cnt ++;
    }
    //step2
    if(next!=NULL){
        head->next = kreverse(next, k);
    }
    //return head of reversed list
    return prev;

}