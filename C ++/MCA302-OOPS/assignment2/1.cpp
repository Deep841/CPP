/*
- program with private and public members
- by default the access specifier is private
*/
#include<iostream>
using namespace std;

class student{
    //by default class specifier is private :
    string naam;
    int age;

    public : 
    int meow;

    //public method to set data
    student(string naam, int age){
        this->naam = naam;
        this->age = age;
    }

    //public methods with public specifier
    void getinfo(){
        cout<<"naam : "<<naam<<endl;
        cout<<"age : "<<age<<endl;
    }
};

int main(){
    student s1("deep", 22);
    s1.getinfo();
    s1.meow = 100;
    cout<<"meow : "<<s1.meow<<endl;
}