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

int getLength(node* head){
    int len = 0;
    while(head!=NULL){
        len++;
        head = head-> next;
    }
    return len;
}

node* findMiddle(node *head){
    int len = getLength(head);
    int ans = (len/2);

    node* temp = head;
    int cnt = 0;
    while (cnt<ans){
        temp = temp->next;
        cnt++;
    }
    return temp;
}
