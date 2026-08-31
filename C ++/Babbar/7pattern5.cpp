#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<"*";
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }
}
//yaha yeh hua ki jitni rows thi utne * print hue..