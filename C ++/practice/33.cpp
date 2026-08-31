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

void insertAtHead(node* &head,int d){
    //create a new node
    node* temp = new node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(node* &tail,int d){
    node* temp = new node(d);
    tail -> next = temp;
    tail = temp;
}

void print(node* &head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

void insertAtPosition(node* &tail, node* &head, int position, int d){
    
    //insert at start
    if(position == 1){
        insertAtHead(head,d);
        return;
    }

    node* temp = head;
    int cnt =1;

    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }

    node* nodeToInsert = new node(d);
    nodeToInsert -> next = temp ->next;
    temp->next  = nodeToInsert;

    //insertion at last node
    while(temp->next == NULL){
        insertAtTail(tail,d);
        return;
    }
}

int main(){
    node* node1 = new node(10);
    node* head = node1;
    node* tail = node1;
    print(head);

    insertAtPosition(tail,head,2,15);
    print(head);

    insertAtPosition(tail,head,1,5);
    print(head);

    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;
}