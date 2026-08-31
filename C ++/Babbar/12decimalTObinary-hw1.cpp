#include<iostream>
using namespace std;
int main(){
    int n;cout<<"enter a negative n : ";cin>>n;

    if(n>=0){
        cout<<"enter a negative number"<<endl;
    }
    else{
        int i=31;
        cout<<"in binary : ";
        while(i>=0){
            int bit =(n>>i)&1;
            cout<<bit;
            i--;
        }
        cout<<endl;
    }
    return 0;
}
