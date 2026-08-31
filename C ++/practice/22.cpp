#include<iostream>
using namespace std;
int main(){

    int n;cout<<"enter n : ";cin>>n;

    if(n>=0){
        cout<<"enter a negative number "<<endl;
    }
    else{
        cout<<"in binary : ";

        int i=31;
        while(i>=0){
            int bit = (n>>i)&1;
            cout<<bit;
            i--;
        }
        cout<<endl;
    }
    return 0 ;
}