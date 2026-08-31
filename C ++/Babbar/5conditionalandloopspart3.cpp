#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter the value of a "<<endl;
    cin>>a;

    // if(a>0){
    //     cout<<"a is positive\n";
    // }
    // else{
    //     if(a<0){
    //         cout<<"a is negative\n";
    //     }
    //     else{
    //         cout<<"a is zero\n"<<endl;
    //     }
    // }

    //now lets see neat n clean form of above code in else if..

    if(a>0){
        cout<<"a is positive"<<endl;
    }
    else if(a<0){
        cout<<"a is negative"<<endl;
    }else{
        cout<<"a is zero"<<endl;
    }
}