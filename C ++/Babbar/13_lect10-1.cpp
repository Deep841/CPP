//lecture 10 ....
//problem - 1 : swap alternate 
#include<iostream>
using namespace std ;
void alternateSwap(int arr[], int size){
    for(int i = 0; i<size ; i+=2){
        if(i+1<size){
            swap(arr[i] , arr[i+1]);
        }
    }
}
void printArray(int arr[] , int size){
    for(int i = 0 ; i< size ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int size;cout<<" size : ? ";cin>>size;
    int arr[100];

    for(int i = 0 ; i <size ; i++){
        cin>>arr[i];
    }
    cout<<"before : ";
    printArray(arr,size);
    alternateSwap(arr,size);
    cout<<"after : ";
    printArray(arr,size);
}

//problem - 2 : unique pto