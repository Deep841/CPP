//lineara search
#include<iostream>
using namespace std;
bool linearSearch(int arr[], int size, int key){
    for(int i = 0 ; i < size ; i++){
        if(arr[i]==key){
            cout<<"at index : "<<i<<endl;
            return true;
        }
    }
    return false;
}
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int key;cout<<"key : ";cin>>key;
    if(linearSearch(arr,10,key)){
        cout<<"key is present"<<endl;
    }
    cout<<"note : index starts from 0 in array."<<endl;
}