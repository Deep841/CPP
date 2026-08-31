// this is my code using bool
//best
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int number;
    cout<<"enter number : ";
    cin>>number;

    int n=2;

    cout<<"prime no.s less then "<<number<<" are : ";

    while(n<=number){

        bool isprime=true;
        int div=2;

        while(div<=sqrt(n)){
            if(n%div==0){
                isprime = false;
                break;
            }
            div++;
        }
        if(isprime){
            cout<<n<<" ";
        }
        n++;
    }
    cout<<endl;


    //integrating the size of primitives dtypes..
    cout<<"size of int a : "<<sizeof(n)<<"bytes"<<endl;
}