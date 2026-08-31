//given number is prime or not
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number : ";
    cin>>n;
    
    int div = 2;

    while(div<n){
        if (n%div==0)
        {
            cout<<"not prime"<<endl;
            return 0;
        }
        else{
            div ++;
        }
    }
    cout<<"prime"<<endl;
    return 0;
}