//polymorphism :
#include<iostream>
using namespace std;

class person {
    public : 
    string name;
    int age;

    //non-parameterised constructor :
    person(){

    }

    //parameterised constructor :
    person(string name, int age){
        this->name = name;
        this->age = age;
    }
};
