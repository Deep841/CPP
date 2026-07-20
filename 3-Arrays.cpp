#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;


/*
1. Two Pointers Technique
-------------------------
- Uses two indices/pointers to solve problems efficiently.
- Reduces nested loops.
- Converts many O(n²) solutions into O(n).

Common Applications:
    * Pair Sum
    * Reverse Array
    * Remove Duplicates
    * Container With Most Water
    * Trapping Rain Water
*/


/*
Pair Sum
- Time : O(n)
- Space: O(1)
- Works only on sorted arrays.
- Move Left Pointer if sum is smaller.
- Move Right Pointer if sum is larger.
*/
bool pairSum(vector<int> &arr, int x){

    int l = 0;
    int r = arr.size() - 1;

    while(l < r){

        int sum = arr[l] + arr[r];

        if(sum == x)
            return true;

        else if(sum > x)
            r--;

        else
            l++;
    }

    return false;
}


/*
Reverse Array
- Time : O(n)
- Space: O(1)
- Uses Two Pointer Technique.
*/
void reverseArray(vector<int> &arr){

    int l = 0;
    int r = arr.size() - 1;

    while(l < r){

        swap(arr[l], arr[r]);

        l++;
        r--;
    }
}


/*
2. Sliding Window
-----------------
- Window moves instead of recomputing the answer.
- Used for:
    * Subarrays
    * Continuous Segments
    * Strings

Types:
1. Fixed Size Window
2. Variable Size Window
*/


/*
Maximum Subarray Sum of Size K
- Time : O(n)
- Space: O(1)
- Fixed Size Sliding Window.
- Used in:
    * Average Sales
    * CPU Usage
    * Temperature Analysis
    * Maximum Sum Problems
*/
int maxSubarraySum(vector<int> &arr, int k){

    int sum = 0;

    for(int i = 0; i < k; i++)
        sum += arr[i];

    int maxSum = sum;

    for(int i = k; i < arr.size(); i++){

        sum += arr[i] - arr[i-k];

        maxSum = max(maxSum, sum);
    }

    return maxSum;
}


/*
3. Prefix Sum
-------------
PrefixSum[i] = Sum of elements from index 0 to i

Used when:
    * Multiple Range Sum Queries
    * Subarray Sum
    * Count of Subarrays

When combined with HashMap:
    * Count Subarrays
    * Longest Subarray
    * Continuous Subarray Sum

Works even when negative numbers are present,
where Sliding Window usually fails.
*/


/*
Subarray Sum Equals K
- Time : O(n)
- Space: O(n)
- Prefix Sum + HashMap
- Works with negative numbers.
*/
int subArraySum(vector<int> &nums, int k){

    unordered_map<int,int> mp;

    int sum = 0;
    int count = 0;

    mp[0] = 1;

    for(int x : nums){

        sum += x;

        if(mp.find(sum-k) != mp.end())
            count += mp[sum-k];

        mp[sum]++;
    }

    return count;
}