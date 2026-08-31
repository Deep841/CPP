#include<iostream>
using namespace std;
int main(){
    int n;cout<<"enter n : ";cin>>n;

    int ans = 0;
    int i = 0;
    while(n != 0){
        int bit = n & 1;
        ans = ans*10 + bit;
        n = n>>1;
        
    }
}