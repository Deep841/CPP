#include<iostream>
using namespace std;
int main()
{
    int n , temp , n1 = 0;
    cout<<"n : ";
    cin>>n;

    temp = n;

    while(n>0){
        int rem = n%10;
        n1 = n1*10 + rem;
        n /= 10;
    }

    cout<<n1<<endl;

    if(temp==n1){
        cout<<"palindrome"<<endl;
    }
    else{
        cout<<"not palindrome"<<endl;
    }

    return 0;
}