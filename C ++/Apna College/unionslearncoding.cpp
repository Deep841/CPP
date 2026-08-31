//youtube video of union(user defined datatype)..
#include<iostream>
using namespace std;
union emp{
    int eid;  //4bytes
    double salary;  //8bytes
    char ch;   //1byte
};
int main (){
    union emp e;
    e.eid=123893;
    cout<<e.eid<<endl;
    e.salary=43254;
    cout<<e.salary<<endl;
    e.ch='A';
    cout<<e.ch<<endl;
    return 0;
    }
    //from youtube(learn code)