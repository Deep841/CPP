#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    //constructor
    node(int data){
        this -> data =data;
        this ->next = NULL;
    }
};

void insertAthead(node* &head,int d){
    //new node creation
    node* temp = new node(d);
    temp -> next = head;
    head =temp;
}

void print(node* &head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

int main(){
    node* node1 = new node(10);
    node* head = node1;
    print(head);
    insertAthead(head,15);
    print(head);
    insertAthead(head,20);
    print(head);
}