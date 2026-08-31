//over ride : 

#include<iostream>
using namespace std;

class parent {
    public : 
    string name; 
    int age;

    parent(){

    }

    void getinfo(){
        cout<<"name : "<<name<<endl;
        cout<<"age : "<<age<<endl;
    }
};

class child : public parent{
    public :
    bool badmashi ;

    child(){

    }

    void getinfo(){
        cout<<"child class getinfo (over riding)";
        cout<<"does badmashi? : "<<badmashi<<endl;
    }
};

int main(){
    child c1;
    c1.name = "deep";
    c1.badmashi = 0; //0 means false

    c1.getinfo();
}