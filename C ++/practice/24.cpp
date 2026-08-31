//program to reverse a number..
#include<iostream>
using namespace std;
int main(){
    int n;cout<<"enter n : ";cin>>n;
    int reversed = 0;
    while(n!=0){
        int num = n%10;
        reversed = reversed*10 + num;
        n = n/10;
    }
    cout<<reversed<<endl;
    return 0;
}