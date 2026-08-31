#include<iostream>
using namespace std;
//1
// void print_array(char arr[],int size){
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }
// int main(){
//     char ch[5] = {'a','b','c','d','e'};
//     print_array(ch,5);
// }
// //note : taking size of array from array is even worst then an array of size 10,000

//2
//now max min function for array
int getMax(int arr[],int size){
    // int max = INT_MIN;
    // for(int i = 0 ; i <size ; i++){
    //     if(arr[i]>max){
    //         max = arr[i];
    //     }
    // }
    // return max;

    //now this funcation can be written in lesser lines : 
    int maxi = INT_MIN;
    for(int i=0; i<size; i++){
        maxi = max(maxi,arr[i]);
    }
    return maxi;
}

int getMin(int arr[], int size){
    // int min = INT_MAX;
    // for(int i = 0 ; i<size ; i++){
    //     if(arr[i]<min){
    //         min=arr[i];
    //     }
    // }
    // return min;

    //similarly this function can also be written in few lines
    int mini = INT_MAX;
    for(int i=0; i<size; i++){
        mini=min(mini,arr[i]);
    }
    return mini;
}


int main(){
    int size;cout<<"size : ";cin>>size;
    int arr[100];   //arr[size] is far worst then arr[100]
    for(int i = 0 ;i<size;i++){
        cin>>arr[i];
    }
    cout<<"max is : "<<getMax(arr,size)<<endl;
    cout<<"min is : "<<getMin(arr,size)<<endl;
}