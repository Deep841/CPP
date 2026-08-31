#include<iostream>
using namespace std;

class teacher{

    // attributes : 

    private : 
    double salary;

    public : 
    string name; 
    string dept;
    string subject; 

    //methods :

    void changedept(string newdept){
        dept = newdept;
    }

    //setter
    void setsalary(double newsalary){
        salary = newsalary;
    }

    //getter
    double getsalary(){
        return salary;
    }

    //constructor 
    teacher(){
        cout<<"constructor called / made ";
    }

    //parameterised...see pic 1
    teacher(string name, string d, string s, int sal){
        this->name = name;
        dept = d;
        subject = s;
        salary = sal;
    }


    void getinfo(){
        cout<<"name : "<<name<<endl;
        cout<<"subject : "<<subject<<endl;
    }
};

int main(){
    teacher t1;
    t1.name = "meow";
    t1.dept = "CSED";
    t1.subject = "OOP";
    t1.setsalary(250000);

    cout<<t1.name<<endl;
    cout<<t1.getsalary()<<endl;

    t1.getinfo();

    teacher t2(t1);//ab yha pe default construtor call hoga instead of copy constructor
    t2.getinfo();
    return 0;
}