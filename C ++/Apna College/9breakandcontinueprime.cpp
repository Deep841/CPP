#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int i;
    for(i=2;i<n;i++){ //for(intialisation;condition;update;){}
        if(i%n==0){
            cout<<"not prime"<<endl;
            break;
        }
    }
    if(i==n){
        cout<<"prime"<<endl;
    }
    return 0;
}
//second example of ninth program..
//to check weather number is prime or not