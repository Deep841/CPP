#include<iostream>
using namespace std;
int main(){
    int a=10;
    // int *aptr ;
    // aptr = &a;
    int *aptr = &a;

    cout<<*aptr<<endl;//value at address 
    cout<<aptr<<endl;//address of a
    cout<<&aptr<<endl;
    cout<<&a<<endl;

    *aptr = 20;
    cout<<a<<endl;

}