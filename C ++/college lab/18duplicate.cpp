#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int j=0;j<n;j++){
        for(int k=j+1;k<n-1;k++){
            if(arr[j]==arr[k]){
                break;
            }
            if(j==k){
                
            }
        }
    }
return 0;
}