//all primes till n
#include<iostream>
#include<cmath>
using namespace std;

int main(){

    int number;
    cout<<"enter number : ";
    cin>>number;

    int n=2;

    while(n<=number){

        int flag=0;
        int div = 2 ;

        while(div<=sqrt(n)){
            if(n%div==0){
                cout<<n<<"is not prime"<<endl;
                flag = 1 ;
                break;
            }
            else{
                div++;
            }
        }
        if(flag==0){
            cout<<n<<"is prime"<<endl;
        }
        n ++ ;
    }
}