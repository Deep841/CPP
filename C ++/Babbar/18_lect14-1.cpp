//Binary search problem
//lect14-1,2
//end = mid (instead mid-1) as lect14-3 end dusre sorted array m chla jata hai..jo ki answer h hi nhi

//Basic without stl
// #include<iostream>
// using namespace std;
// int getPivot(int arr[], int size){
//     int start = 0, end = size-1;
//     while(start<end){
//         int mid = start + (end-start)/2;
//         if (arr[mid]>arr[start]){
//             start = mid + 1;
//         }
//         else{
//             end = mid;
//         }
//     }
//     return start;
// }
//using stl-containers

#include<iostream>
#include<vector>
using namespace std;
int fintPivot(vector<int>&arr){
    int start = 0 , end = arr.size()-1;
    while(start<end){
        int mid = start + ( end - start )/2;
        if(arr[mid]>arr[end]){
            start=mid+1;
        }
        else{
            end=mid;
        }
    }
    return start;
}
//visualise findPivot by lect13-4

//now a question to find a element/key in a sorted then rotated array using O(logn) i.e. binary search
/*
Steps : first find pivot
      : through condition check wheather the key lies of first line or second line 
      : then apply binary search on that line
      : lect14-5
*/

//a question from leetcode find minimum
// https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/
class Solution {
public:
    int findMin(vector<int>& nums) {
        int start = 0, end = nums.size() - 1;
        while (start < end) {
            int mid = start + (end - start) / 2;

            if (nums[mid] > nums[end]) {
                // Minimum must be on the right
                start = mid + 1;
            } else {
                // Minimum is on the left or could be mid
                end = mid;
            }
        }
        return nums[start]; // Return the minimum value
    }
};

//leet code question in class 
// https://leetcode.com/problems/search-in-rotated-sorted-array/
class Solution {
public:
    int findPivot(vector<int>& nums) {
        int start = 0 , end = nums.size()-1;
        while(start < end){
            int mid = start + (end - start)/2;
            if(nums[mid] > nums[end]){
                start = mid + 1;
            }
            else{
                end = mid;
            }
        }
        return start;
    }

    int binarySearch(vector<int>& nums, int start, int end, int key) {
        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (nums[mid] == key)
                return mid;
            else if (nums[mid] > key)
                end = mid - 1;
            else
                start = mid + 1;
        }
        return -1;
    }

    int search(vector<int>& nums, int target) {
        int pivot = findPivot(nums);
        int result = -1;
        
        if(target >= nums[pivot] && target <= nums[nums.size() - 1]) {
            result = binarySearch(nums, pivot, nums.size() - 1, target);
        } else {
            result = binarySearch(nums, 0, pivot - 1, target);
        }

        return result;
    }
};

//similar question on code360 https://www.naukri.com/code360/problems/search-in-a-rotated-sorted-array-ii_7449547?leftPanelTabValue=SUBMISSION
int findPivot(vector<int>& A) {
    int start = 0, end = A.size() - 1;
    while (start < end) {
        int mid = start + (end - start) / 2;

        if (A[mid] > A[end]) {
            start = mid + 1;
        } else if (A[mid] < A[end]) {
            end = mid;
        } else {
            // When duplicates exist
            end--;
        }
    }
    return start;
}

int binarySearch(vector<int>& A, int start, int end, int key) {
    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (A[mid] == key) {
            return mid;
        } else if (A[mid] > key) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return -1;
}

bool searchInARotatedSortedArrayII(vector<int>& A, int key) {
    if (A.empty()) return false;

    int pivot = findPivot(A);
    int result = -1;

    if (key >= A[pivot] && key <= A[A.size() - 1]) {
        result = binarySearch(A, pivot, A.size() - 1, key);
    }
    else {
        result = binarySearch(A, 0, pivot - 1, key);
    }

    return result != -1;
}

//ab sir ka steps vala question https://www.naukri.com/code360/problems/search-in-rotated-sorted-array_1082554?leftPanelTabValue=SUBMISSION
int findPivot(vector<int>& arr) {
    int start = 0, end = arr.size() - 1;

    while (start < end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] >= arr[0]) {
            start = mid + 1;
        } else {
            end = mid;
        }
    }

    return start;
}

int binarySearch(vector<int>& arr, int start, int end, int key) {
    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            start = mid + 1;
        else
            end = mid - 1;
    }
    return -1;
}

int search(vector<int>& arr, int n, int k) {
    int pivot = findPivot(arr);

    if (k >= arr[pivot] && k <= arr[n - 1]) {
        return binarySearch(arr, pivot, n - 1, k);
    }
    else {
        return binarySearch(arr, 0, pivot - 1, k);
    }
}

//now ab sir vale question m total 3 approcahes h - HW m try kro