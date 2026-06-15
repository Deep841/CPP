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

