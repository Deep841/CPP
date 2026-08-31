#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    cout<<"printing count from 1 to "<<n<<endl;

    for(int i=1;i<=n;i++){
        cout<<i<<endl;
    }

    //now for loop for more than one variable
cout<<"now multiple variable in for loop : ";
    for(int a=0, b=1, c=2; a>=0 && b>=1 && c>=2; a--, b--,c--){
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
}