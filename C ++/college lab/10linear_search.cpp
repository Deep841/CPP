#include<iostream>
using namespace std;

    int linearsearch(int arr[], int n, int key){

        for(int i=0; i<n; i++){
            if(arr[i]==key){
                return i;
            }
        }
        return -1;
    }

int main(){
    int n;
    cout<<"enter size of array,n : ";
    cin>>n;
    
    int arr[n];
    for(int i=0; i<n; i++){
        cout<<"elts btao "<<i<<" no pe : "<<endl;
        cin>>arr[i];
    }

    int key;
    cout<<"kya dhund rhe hai? : ";
    cin>>key;
    cout<<linearsearch(arr, n, key)<<endl;

    return 0;
}