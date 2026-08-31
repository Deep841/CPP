#include<iostream>
using namespace std;
int main(){
    //array size is predefined..
    // int arr[5];

    // for(int i=0; i<5; i++){
    //     cin>>arr[i];
    // }

    // for(int i=0; i<5; i++){
    //     cout<<arr[i]<<endl;
    // }

    //array size is not predefined..

    int n;
    cin>>n;
    int arr[n];

    for(int i =0; i<n; i++){
        cin>>arr[i];
    }

    for(int i= 0; i<n; i++){
        cout<<arr[i]<<endl;
    }
}

