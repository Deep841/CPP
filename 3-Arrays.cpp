#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

/* 1. Two Pointers Technique
- use two indices to reduce nested loop
- O(n^2) -> O(n)
*/

//Q- Pair Sum = find if there exists a pair with sum=x
// O(n), O(1)
 bool pairSum(vector<int> &arr, int x){
    int l=0, r=arr.size()-1;

    while(l<r){
        int sum = arr[l]+arr[r];
        if(sum==x)  return true;
        else if (sum>x) r--;
        else l--;
    }
    return false;
}

//Q- Reverse an Array
void reverseArray(vector<int> &arr){
    int l=0, r=arr.size()-1;
    while(l<r){
        swap(arr[l++],arr[r--]);
    }
}


/*
2. Sliding Window 
- Window moves instead of recomputing sum
- used when dealing with : subarrays, continous segments
*/

//Q- max subarray of sum k
//O(n), O(1), works only for fixed window size, avg sales, CPU ussage.
int maxSubarraySum(vector<int> &arr, int k){
    int sum=0;
    for(int i=0;i<k;i++)    sum+=arr[i];

    int maxSum = sum;
    for(int i=k;i<arr.size();i++){
        sum+=arr[i]-arr[i-k];
        maxSum = max(maxSum,sum);
    }
    return maxSum;
}


/*
3. PrefixSum 
PrefixSum[i] = sum from i=0 to i
*/

//Q- Subarray with sum k = find total count of subarrays whose sum=k
//O(n), O(n), sliding window fails here 
int subArraySum(vector<int>&nums, int k){
    unordered_map<int,int> mp;
    int sum=0,count=0;
    mp[0]=1;

    for(int i : nums){
        sum+=i;
        if(mp.find(sum-k) != mp.end())  count += mp[sum-k];
        mp[sum]++;
    }
    return count;
}

