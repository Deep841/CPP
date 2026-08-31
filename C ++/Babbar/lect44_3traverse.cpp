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

void insertathead(node* &head, int d){ //used &head so that the changes occurs in the original LL

    //new node create
    node* temp = new node(d);
    temp -> next = head;
    head = temp;
}

void print(node* &head){
    node* temp = head;
    while(temp != NULL){
        cout<< temp -> data<<" ";
        temp = temp ->next;
    }
    cout<<endl;
}

int main(){
    node* node1 = new node(10);
    node* head = node1;
    print(head);
    insertathead(head,12);
    print(head);
    insertathead(head,15);
    print(head);
}