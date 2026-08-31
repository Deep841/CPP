// Inheritance :
#include<iostream>
using namespace std;

class person {
    public :
    string name;
    int age;

    person(){

    }
};

class student : public person {    //acess modifier is public
    public :
    int rollno;

    student(){

    }

    void getinfo(){
        cout<<"name : "<<name<<endl;
        cout<<"age : "<<age<<endl;
        cout<<"rollno : "<<rollno<<endl;
        cout<<endl;

    }
};

int main(){
    student s1;
    s1.name = "deep";
    s1.age = 22;
    s1.rollno = 31;
    s1.getinfo();
}