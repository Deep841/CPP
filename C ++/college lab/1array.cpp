#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter the size of array :";
    cin>>n;

    int array[n];

    for(int i=0; i<n; i++){
        cout<<"enter the elts of the array of "<<i<<"th postion : ";
        cin>>array[i];
    }

cout<<"array : ";

    for(int i=0; i<n; i++){//agar idhr i<n toh sirf utne hi elts jynge array m jitna n hoga.
        cout<<array[i]<<" ";
    }
}