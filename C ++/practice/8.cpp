#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n : ";
    cin>>n;
    // for(int i=1;i<=n;i++){
    //     int value=i;
    //     for(int j=1;j<=i;j++){
    //         cout<<value<<" ";
    //         value--;
    //     }
    //     cout<<endl;
    //}
    //there's also another way to do this..

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i-j+1<<" ";
        }
        cout<<endl;
    }
}
//commented vala jyda jldi hua...