//neagtive decimal to binary
#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"enter a negative number : ";
    cin>>n;

    if(n>0){
        cout<<"enter a negative number "<<endl;
    }
    else{
        int i = 31;
        while(i>=0){
            int bit = n & 1;
            n = n >> 1;
            cout<<bit;
            i--;
        }
        cout<<endl;
    }
    return 0;
}