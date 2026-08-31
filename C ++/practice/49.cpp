//Linked List
#include<iostream>
using namespace std;

class node{

    public : 
    int data ; 
    node* next;

    //constructor : 
    node(int data){
        this -> data = data;
        this -> next = NULL;
    }

    //destructor
    ~node(){
        // int value = this-> data;
        // //memory free
        // if(this->next != NULL){
        //     delete next;
        //     this->next = NULL;
        // }
        // cout<<"memory is free for node with data "<<value<<endl;

        delete next;
        cout<<"memory is free for "<<data<<endl;
    }
};


void insertathead(node* &head, int d){

    //new node creation 
    node* temp = new node(d);
    temp -> next = head;
    head = temp;
}


void print(node* &head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp-> next;
    }
    cout<<endl;
}


void insertattail(node* &tail , int d){
    node* temp = new node(d);
    tail->next = temp;
    tail = temp;
}


void insertatposition(node* &tail, node* &head, int position, int d){
    //insert at start
    if(position==1){
        insertathead(head,d);
        return;
    }

    node* temp = head;
    int count = 1;

    while(count<position-1){
        temp = temp->next;
        count++;
    }

    while(temp->next == NULL){
        insertattail(tail,d);
        return;
    }

    node* nodetoinsert = new node(d);
    nodetoinsert->next = temp->next;
    temp->next = nodetoinsert;
}



void deletenode(node* head, int position){
    if(!head)   return;

    if(position == 1){
        node* temp = head;
        head = head->next;
        temp->next=NULL;
        delete temp;
        return;
    }
    
    node* temp = head;
    int count = 1;

    while(count<position - 1 && temp && temp->next){
        temp = temp-> next;
        count ++;
    }

    if(!temp || !temp->next){
        cout<<"invalid position"<<endl;
        return;
    }

    node* nodetodelete = temp->next;
    temp->next = temp->next->next;    //temp->next = nodetodelete->next;
    nodetodelete->next = NULL;
    delete nodetodelete;
}



int main(){
    node* node1 = new node(10);
    cout<<node1->data<<endl;
    cout<<node1->next<<endl;

    node* head = node1;
    node* tail = node1;
    print(head);
    insertathead(head, 82);
    print(head);
    insertathead(head, 31);
    print(head);


    insertattail(tail, 141);
    print(head);

    insertatposition(tail,head,4,22);
    print(head);

        cout<<"head "<<head -> data<<endl;
        cout<<"tail "<<tail -> data<<endl;
}