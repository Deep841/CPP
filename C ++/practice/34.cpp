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

    //destructor
    ~node(){
        int value = this -> data;
        //memory free
        if(this->next != NULL){
            delete next;
            this ->next = NULL;
        }
        cout<<"memory is free for the node with data"<<value<<endl;
    }
};

void insertAthead(node* &head,int d){
    node* temp = new node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(node* &tail,int d){
    node* temp = new node(d);
    tail->next = temp;
    tail =temp;
}

void print(node* & head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp =temp -> next;
    }
    cout<<endl;
}

void insertAtPosition(node* &tail,node* &head,int position,int d){
    //insert at start 
    if(position == 1){
        insertAthead(head,d);
        return;
    }

    node* temp = head;
    int cnt = 1;

    while(cnt<position-1){
        temp = temp->next;
        cnt++;
    }

    //inserting at last positon
    while(temp -> next ==NULL){
        insertAtTail(tail,d);
        return ;
    }

    //create a node for d
    node* nodeToInsert = new node(d);
    nodeToInsert ->next = temp->next;
    temp->next = nodeToInsert;
}

int main(){
    node* node1 = new node(10);
    node* head = node1;
    node* tail = node1;

    print(head);

    insertAthead(head,5);
    print(head);

    insertAtTail(tail,15);
    print(head);

    insertAtPosition(tail,head,1,0);
    print(head);

    insertAtPosition(tail,head,5,20);
    print(head);

    insertAtPosition(tail,head,4,12);
    print(head);

    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;
}