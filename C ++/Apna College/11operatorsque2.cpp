#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"kindly enter a number: ";
    cin>>n;

    if(n%2==0 && n%3==0){
        cout<<"given number is divisible by both 2 and 3\n";
    }
    else if(n%2==0){
        cout<<"given number is divisible by 2"<<endl;
    }
    else if(n%3==0){
        cout<<"given number is only divisibble by 3"<<endl;
    }
    else{
        cout<<"given number is neither divisible by 2 nor 3\n";
    }
}