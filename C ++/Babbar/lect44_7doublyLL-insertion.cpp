#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node* prev;

    //constructor
    node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
};

void print(node* &head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int getslength(node* &head){
    int length = 0 ;
    node* temp = head;
    while(temp!=NULL){
        length++;
        temp=temp->next;
    }
    return length;
}

void insertAtHead(node* &head,int d){
    node* temp = new node(d);
    temp->next = head;
    head->prev = temp;
    head=temp;
}

void insertAtTail(node* &tail,int d){
    node* temp = new node(d);
    tail ->next = temp;
    temp -> prev = tail;
    tail = temp;
}

void insertAtPosition(node* &tail,node* &head,int positioin, int d){
    //insert at start
    if(positioin==1){
        insertAtHead(head,d);
        return;
    }

    node* temp = head;
    int cnt = 1;
    while(cnt<positioin-1){
        temp = temp->next;
        cnt++;
    }

    //at end 
    if(temp->next==NULL){
        insertAtTail(tail,d);
        return;
    }

    //creation of new node
    node* nodeToInsert = new node(d);
    nodeToInsert->next = temp->next;
    nodeToInsert->prev = temp;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
}

int main(){
    node* node1 = new node(10);
    node* head = node1;
    node* tail = node1;
    print(head);

    insertAtHead(head,5);
    print(head);

    insertAtTail(tail,15);
    print(head);

    insertAtPosition(tail,head,3,12);
    print(head);

    insertAtPosition(tail,head,1,0);
    print(head);

    insertAtPosition(tail,head,6,20);
    print(head);

    cout<<"length : "<<getslength(head)<<endl;;

}
