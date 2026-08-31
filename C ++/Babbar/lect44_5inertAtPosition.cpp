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

void insertAtHead(node* &head, int d){
    node* temp = new node(d);
    temp -> next = head;
    head = temp;
}

void insertAtTail(node* &tail, int d){
    node* temp = new node(d);
    tail -> next = temp;
    tail = temp;
}

void print(node* &head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp -> data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

void insertAtpostion(node* &tail, node* &head, int position, int d){

    //insert at start
    if(position == 1){
        insertAtHead(head,d);
        return;
    }

node* temp = head;
int cnt =1;

while(cnt<position-1){
    temp = temp->next;
    cnt ++;
}

//inserting at last position
while(temp ->next == NULL){
    insertAtTail(tail,d);
    return;
}

//create a node for d
node* nodeToInsert = new node(d);
nodeToInsert -> next = temp -> next;
temp -> next = nodeToInsert;

}

int main(){
    node* node1 = new node(10);

    node* tail = node1;
    node* head = node1;

    print(head);

    insertAtHead(head, 15);
    print(head);

    insertAtTail(tail, 20);
    print(head);

    insertAtpostion(tail,head,4,22);
    print(head);

    cout<<"head "<<head -> data<<endl;
    cout<<"tail "<<tail -> data<<endl;
}
