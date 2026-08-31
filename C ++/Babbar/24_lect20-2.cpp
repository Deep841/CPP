/*
3)Move zeros : all zero(s) ko left m shift krdo 
approach : sari non zero elts ko right m shift krdo using a variable nonZero which reps index of non zero elts left m aaynge unka
https://leetcode.com/problems/move-zeroes/
*/
#include<iostream>
#include<vector>
using namespace std;

void moveZero(vector<int>& arr){
    int nonZero = 0;
    
    for(int i=0 ; i<arr.size() ;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[nonZero]);
            nonZero++;
        }
    }
}

int main(){
    vector<int> arr={1,2,0,3,2,0,1};
    moveZero(arr);
    cout<<"after : ";
    for(auto i : arr){
        cout<<i<<" ";
    }cout<<endl;
}