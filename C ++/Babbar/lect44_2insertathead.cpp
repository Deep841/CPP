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

int main(){
    
    node* node1 = new node(10);
    cout<< node1 -> data <<endl;
    cout<< node1 -> next <<endl;

}
