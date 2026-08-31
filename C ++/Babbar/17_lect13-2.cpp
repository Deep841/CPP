//problem : peek index in mountain array
//Linear search vli technique toh pata h hume ki for loop lgynge 0 to n then vha se max element se aagynge O(n)
/*Binary search : se O(logn)
                : lect13-5,6 ... ab 3 parts m divide kr liya mountain ko and first part m see pic . 
                  and isme end=mid kiya kyuki agar mid-1 kr denge toh end pointer peak index se phle aajyega. see lect13-7
                : yaha humne start<end m start=end iss liye ni kiya kyun ki iss comaprision krne se phla vala ans same hi hoga iss vle comaprision m see lect13-8
*/
// https://leetcode.com/problems/peak-index-in-a-mountain-array/submissions/1673066058/
#include<vector>
using namespace std;
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int start = 0, end = arr.size()-1;
        while(start<end){
            int mid = start + (end - start)/2;
            if(arr[mid]<arr[mid+1]){
                start = mid + 1;
            }
            else{
                end = mid;
            }
        }
        return start;
    }
};

// https://www.naukri.com/code360/problems/find-peak-element_1081482
int findPeakElement(vector<int> &arr) {
    int start = 0, end = arr.size() - 1;

    while (start < end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] < arr[mid + 1]) {
            start = mid + 1;
        } 
        else {
            end = mid;
        }
    }

    return start;  
}

/*HW : find pivot in an array
Pivot : A pivot is an index in rotated sorted array where the maximum or minimum element lies - i.e. the point of ratation.
        : It’s the point where array transitions from larger to smaller values.
Pivot in Rotated Sorted Array (Leetcode: Find Minimum in Rotated Sorted Array) : Goal- Find the index of the smallest (or largest) element in a rotated sorted array.
Rotated Sorted Array Pivot
Where we find the smallest element (i.e., the rotation point) using binary search.
*/
int findPivot(vector<int>&arr){
    int s = 0, e = arr.size() - 1;
    while(s<e){
        int mid = s + (e-s)/2;
        if(arr[mid]>arr[e]){
            s = mid + 1;
        }
        else{
            e = mid ; 
        }
    }
    return s;
}

//now leet code question 
// https://leetcode.com/problems/find-pivot-index/
// see lect13-9
// Pivot Index (Leetcode: Find Pivot Index) : Goal- Find an index where the sum of elements on the left = sum of elements on the right.

int pivotIndex(vector<int>& nums) {
    int totalSum = 0;
    for(int num : nums){
        totalSum += num;
    }

    int leftSum = 0;
    for(int i = 0; i < nums.size(); i++){
        int rightSum = totalSum - leftSum - nums[i];

        if(leftSum == rightSum){
            return i; 
        }

        leftSum += nums[i];
    }

    return -1;
}