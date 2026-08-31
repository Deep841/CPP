#include<iostream>
using namespace std;
int main(){
    int n;cout<<"enter decimal : ";cin>>n;
    
    int ans = 0;

    while(n!=0){
        int bit = n & 1;
        ans = ans*10 + bit;
        n = n >> 1;
    }
    cout<<"in binary : "<<ans<<endl;
}
//yeh hogya simply decimal to binary convert krne ka program.
