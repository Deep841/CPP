//doubly linked list
#include<iostream>
using namespace std;

class node{
    public : 
    int data;
    node* next;
    node* prev;

    //constructor
    node(int data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insertathead(node* & head , int d){
    node* temp = new node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
}

void insertattail(node* & tail, int d){
    node* temp = new node(d);
    temp->prev = tail;
    tail->next = temp;
    tail = temp;
}

void insertatposition(node* &head, node* &tail, int position, int d){
    //start 
    if(position == 1){
        insertathead(head,d);
        return;
    }

    node* temp = head;
    int count  = 1;

    while(count < position - 1){
        temp = temp->next;
        count ++;
    }

    if(temp->next == NULL){
        insertattail(tail,d);
        return;
    }

    node* nodetoinsert = new node(d);
    nodetoinsert->next = temp->next;
    nodetoinsert->prev = temp;
    temp->next->prev = nodetoinsert;
    temp->next = nodetoinsert;

}

int getlength(node* &head){
    node* temp = head;
    int length = 0;
    while(temp!= NULL){
        length++;
        temp = temp->next;
    }
    return length;
}

void print(node* &head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }cout<<endl;
}

int main(){

    node* node1 = new node(10);
    node* head = node1;
    node* tail = node1;

        print(head);  // 10

    insertathead(head, 5);      // 5 10
    print(head);

    insertattail(tail, 20);     // 5 10 20
    print(head);

    insertatposition(head, tail, 2, 15); // 5 15 10 20
    print(head);

    cout << "Length: " << getlength(head) << endl;  // Output: 4

    return 0;
}