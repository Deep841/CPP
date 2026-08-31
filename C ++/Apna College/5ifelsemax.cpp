//eg1. using if else statement finding the maximum of three given numbers..
#include <iostream>
using namespace std;

int main(){

    int a,b,c;
    cin>>a>>b>>c;

    if(a>b){
        if(a>c){
            cout<<a<<endl;
        }else {
            cout<<c<<endl;
        }
    }else {
        if(b>c){
            cout<<b<<endl;
        }else{
            cout<<c<<endl;
        }
    }

    return 0;
}
//eg of fifth program.
//first example of fifth program.