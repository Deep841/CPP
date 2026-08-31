#include<iostream>
using namespace std;

class node{
    public:
    int data ; 
    node* next;

    //constructor
    node(int data){
        this->data = data;
        this->next = NULL;
    }

    //destructor
    ~node(){
        int value = this-> data;
        while(this->next!=NULL){
            this->next = NULL;
            delete next;
        }
        cout<<"memory is free for node with data"<<value<<endl;
    }
};

void deleteNode(int pos , node* &head){
    if(pos==1){
        node* temp = head;
        head = head -> next;
        temp->next = NULL;
        delete temp;
    }
    else{
        node* curr = head;
        node* prev = NULL;
        int cnt = 1;
        while(cnt<pos){
            prev = curr;
            curr = curr -> next ;
            cnt++;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}

