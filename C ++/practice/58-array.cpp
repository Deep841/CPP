#include<iostream>
#include<vector>
using namespace std;

//Pair Sum : use two pointer , O(n), O(1)
// use case in financial systems. inventory matching.
bool pairSum(vector<int> &arr, int target){
    int l = 0, r = arr.size()-1;

    while(l<r){
        int sum = arr[l] + arr[r];
        if(sum == target)    return true;
        else if (sum > target)  r--;
        else    l++;
    }
    return false;
}

//Reverse : O(n), O(1)
void reverseArray(vector<int> & arr){
    int l = 0, r = arr.size()-1;

    while(l<r){
        swap(arr[l++], arr[r--]);
    }
}

//Max sum subarray of size k
// O(n), O(1), avg sales, cpu ussage 
int maxSumSubarray(vector<int>& arr, int k){
    int sum = 0;
    for(int i=0; i<k ; i++) sum+=arr[i];

    int maxSum = sum;
    for(int i=k ; i<arr.size()-1; i++){
        sum += arr[i] - arr[i-k];
        maxSum = max(maxSum, sum);
    }
    return maxSum;
}