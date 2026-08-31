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
        this->next = NULL;
    }
};

void insertAtHead(node* &tail,node* &head,int d){
    if(head==NULL){
        node* temp = new node(d);
        head = temp;
        tail = temp;
    }
    else{
        node* temp = new node(d);
        temp -> next = head;
        head -> prev = temp;
        head=temp;
    }
}

void insertAtTail(node* &tail,node* &head,int d){
    if(tail==NULL){
        node* temp = new node(d);
        head = temp;
        tail = temp;
    }
    else{
        node* temp = new node(d);
        tail->next=temp;
        temp->prev=tail;
        tail = temp;
    }
}

void insertAtPosition(node* &tail,node* &head,int position,int d){
    //insert at start
    if(position==1){
        insertAtHead(tail,head,d);
        return ; 
    }

    node* temp = head;
    int cnt =1;

    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }

    //insert at tail
    if(temp->next==NULL){
        insertAtTail(tail,head,d);
        return ;
    }

    //at position
    node* nodeToInsert = new node(d);
    nodeToInsert->next=temp->next;
    temp->next->prev=nodeToInsert;
    temp->next=nodeToInsert;
}

int getsLength(node* &head){
    int length = 0;
    node* temp = head;
    while(temp!=NULL){
        length++;
        temp=temp->next;
    }
    return length;
}

void print(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    node* head = NULL;
    node* tail = NULL;
    insertAtHead(tail,head,5);
    print(head);
    insertAtTail(tail,head,10);
    print(head);
    insertAtPosition(tail,head,2,7);
    print(head);
    cout<< "head : "<<head->data<<endl;
    cout<<"tail : " <<tail->data<<endl;
}