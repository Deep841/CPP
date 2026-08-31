#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n : ";
    cin>>n;

    int div = 2 ;

    while (div <= sqrt(n)){
        if(n%div==0){
            cout<<"not prime "<<endl;
            return 0;
        }
        else{
            div ++ ;
        }
    }
    cout<<"prime"<<endl;
    return 0;
}