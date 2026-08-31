#include<iostream>
using namespace std;

//copy LL with random pointers
class node {
    public :
    int d;
    node* next;

    //constructor : 
    node(int d){
        this->d = d;
        this->next = NULL;
    }

    //destructor : 
    ~node(){
        delete next;
        cout<<"memory is free for "<<d<<endl;
    }
};

