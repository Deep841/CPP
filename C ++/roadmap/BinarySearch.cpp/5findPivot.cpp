/*
33. Search in Rotated Sorted Array
- https://leetcode.com/problems/search-in-rotated-sorted-array/description/

yeh question 3 fumctions se hoga :
(i) find pivot : yeh return krega ki kha se array start ho rha h
(ii) binary search : yeh simply binary search ka function
(iii) search : yeh actual search function 
*/

#include<iostream>
using namespace std;
#include<vector>

int findPivot(vector<int> &nums){
    int start = 0;
    int end = nums.size() - 1;

    while(start<end){
        int mid = start + (end - start)/2;

        if(nums[end] < nums[mid]){
            start = mid + 1;
        }
        else{
            end = mid;
        }
    }
    return start ;
}

int binarySearch(vector<int> &nums, int start , int end, int key){
    while(start<=end){
        int mid = start + (end-start)/2;
        if(nums[mid]==key)  return mid;

        if(nums[mid]>key){
            end = mid -1 ;
        }
        else{
            start = mid + 1;
        }
    }
    return -1;
}

int search(vector<int> & nums, int target){
    int pivot = findPivot(nums);
    int result = -1;

    //agar target pivot ke baad wale half mein h
    if(target >= nums[pivot] && target <= nums[nums.size()-1]){
        result = binarySearch(nums, pivot, nums.size()-1, target);
    }
    else{
        result = binarySearch(nums, 0 , pivot -1 , target);
    }
    return result;
}

int main() {
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    int target = 0;

    int index = search(nums, target);

    if(index != -1)
        cout << "Target found at index: " << index << endl;
    else
        cout << "Target not found." << endl;

    return 0;
}