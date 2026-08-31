/*
problems : 
1)rotate array : 
-Given an array nums and an integer k, rotate the array to the right by k steps, in-place.
-lect21-1,2
-cheeze overwrite hojyngi iss liye humne temp array use kiya
- https://leetcode.com/problems/rotate-array/submissions/1681837018/
*/
#include<iostream>
#include<vector>
using namespace std;

void rotateArray(vector<int> &arr , int k){
    vector<int> temp(arr.size());

    for(int i=0; i<arr.size(); i++){
        temp[(i+k)%arr.size()]=arr[i];
    }
    arr=temp;
}

int main(){
    vector<int> arr={1,2,4,3,4,5};
    int k = 2;

    cout<<"before : ";
    for(auto i : arr){
        cout<<i<<" ";
    }cout<<endl;

    rotateArray(arr,k);

    cout<<"after rotate : ";
    for(auto i : arr){
        cout<<i<<" ";
    }cout<<endl;

    return 0;
}