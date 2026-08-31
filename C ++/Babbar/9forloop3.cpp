#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"enter n : ";
    cin>>n;

    int isprime=1;

    for(int i=2; i<n; i++){

        if(i%n==0){
            isprime =0;
            break;
        }
    }

    if(isprime==0){
        cout<<"not prime"<<endl;
    }
    
    else{
        cout<<"prime"<<endl;
    }
}