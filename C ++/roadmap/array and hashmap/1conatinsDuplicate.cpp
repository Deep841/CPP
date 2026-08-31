/*
roadmap : 
https://neetcode.io/roadmap

1)contains duplicate : 
- https://leetcode.com/problems/contains-duplicate/
two approaches : 
(I)brute force - O(n^2)
(II)sorting - O(nlogn)
(III)hash set - O(n)
*/

#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_set>
using namespace std;


//(I)brute force approach : time limit exceeded
bool containsDuplicate(vector<int>& nums){
    for(int i=0 ; i < nums.size() ; i++){
        for(int j=0; j<nums.size() ; j++){
            if(i==j)    continue;
            else if(nums[i]==nums[j]){
                return true;    //duplicate exists
            }
        }
    }
    return false;
}


//(II)sorting : uses #include<algorithm>
bool containsDuplicate_2(vector<int>& arr){
    sort(arr.begin(), arr.end());
    for(int i = 1 ; i<arr.size() ; i++){
        if(arr[i]==arr[i-1]){
            return true;
        }
    }
    return false;
}


/*(III)hash set : Using Hash Set (Optimal)
- We use a hash set to store seen numbers. If we encounter a number already in the set, we return true.
- does a certain value exists...hash map se pata chlega ki ek number exist krta hai ya nhi
- if not duplicate then add to hash map
- n number of times check hua...and...hash map m gya ...O(n) both time and space
- 1-conatian duplicate pic
*/
bool containsDuplicate_3(vector<int>& arr){
    unordered_set<int> seen;
    for(int num : arr){
        if(seen.count(num)){
            return true;
        }
        seen.insert(num);
    }
    return false;
}

//int main gpt se 
// 🌟 Main Function
int main() {
    vector<int> nums = {1, 2, 3, 4, 1};

    cout << "Brute force: " << (containsDuplicate(nums) ? "Duplicate Found" : "No Duplicate") << endl;
    cout << "Sorting: " << (containsDuplicate_2(nums) ? "Duplicate Found" : "No Duplicate") << endl;
    cout << "Hash Set: " << (containsDuplicate_3(nums) ? "Duplicate Found" : "No Duplicate") << endl;

    return 0;
}


/*
observation : 
- Even though hash set (unordered_set) is theoretically better in time complexity O(n), 
    here’s why it may perform worse than sorting (O(n log n)) on LeetCode:
    : Require dynamic memory allocations.
    : sort is highly optimized
    : Hash collisions might slow down unordered_set slightly.
    : Memory allocation & deallocation has cost.
*/