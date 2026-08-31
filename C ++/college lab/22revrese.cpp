#include<iostream>
using namespace std;

int main(){
    int n , n1=0;
    cout<<"n : ";
    cin>>n;
    while(n>0){
        int rem = n%10;
        n1 = n1 * 10 + rem;
        n /= 10;
    }
    cout<<n1<<endl;
    return 0;
}