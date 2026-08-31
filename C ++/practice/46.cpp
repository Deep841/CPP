//Book allocation problem : 
#include<iostream>
using namespace std;
#include<vector>

bool isPossible(vector<int> &arr, int n, int m, int mid){
    int studentCount = 1;
    int pageSum = 0;

    for(int i = 0 ; i < n ; i++){
        if(arr[i]>mid){
            return false;
        }
        if(arr[i]+pageSum<=mid){
            pageSum += arr[i];
        }
        else{
            studentCount++;
            if(studentCount>m){
                return false;
            }
            pageSum=arr[i];
        }
    }
    return true;
}

int allocateBook(vector<int> &arr , int n , int m){
    if(m>n){
        return -1;
    }
    int start = 0;
    int sum = 0;
    for(int i =0 ; i < n ; i++){
        sum+=arr[i];
        start=max(arr[i],start);
    }
    int end = sum;
    int ans = -1;
    while(start<=end){
        int mid = start + (end-start)/2;
        if(isPossible(arr,n,m,mid)){
            ans = mid;
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    return ans;
}