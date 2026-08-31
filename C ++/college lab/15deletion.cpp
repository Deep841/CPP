#include<iostream>
using namespace std;
int main(){
    int n,pos,count=0;
    cout<<"enter the size of an array: ";
    cin>>n;
    int arr[n];
    cout<<"enter array elements:\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter the position: ";
    cin>>pos;
    for(int i=pos-1;i<n;i++){
        arr[i]=arr[i+1];
    }
    n--;
    cout<<"new array is: ";
    for(int i=0;i<n;i++){
        cout<<" "<<arr[i];
    }
    cout<<endl;
    return 0;
}