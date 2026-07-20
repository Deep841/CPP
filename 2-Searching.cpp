/*
Searching

1. Linear Search
    - Works on both sorted and unsorted arrays.
    - Checks every element one by one.

2. Binary Search
    - Works only on sorted arrays.
    - Divide and Conquer approach.
    - Eliminates half of the search space in every iteration.
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


/*
Linear Search
- Time : O(n)
- Space: O(1)
- Works on sorted as well as unsorted arrays.
- Best for small datasets or one-time searches.
*/
int linearSearch(vector<int> &arr, int key){

    for(int i = 0; i < arr.size(); i++){

        if(arr[i] == key)
            return i;
    }

    return -1;
}


/*
Binary Search
- Time : O(log n)
- Space: O(1) (Iterative)
- Divide and Conquer
- Works only on sorted arrays.
- Used in:
    * Lower Bound
    * Upper Bound
    * First / Last Occurrence
    * Search Insert Position
    * Peak Element
    * Rotated Sorted Array
    * Answer-space Binary Search
*/
int Binary(vector<int> &arr, int key){

    int s = 0;
    int e = arr.size() - 1;

    while(s <= e){

        int mid = s + (e - s)/2;

        if(arr[mid] == key)
            return mid;

        else if(arr[mid] > key)
            e = mid - 1;

        else
            s = mid + 1;
    }

    return -1;
}


/*
First Occurrence
- Time : O(log n)
- Space: O(1)
- Continue searching towards the left even after finding the key.
*/
int firstOcc(vector<int> &arr, int key){

    int s = 0;
    int e = arr.size() - 1;
    int ans = -1;

    while(s <= e){

        int mid = s + (e - s)/2;

        if(arr[mid] == key){

            ans = mid;
            e = mid - 1;
        }

        else if(arr[mid] > key)
            e = mid - 1;

        else
            s = mid + 1;
    }

    return ans;
}


/*
Last Occurrence
- Time : O(log n)
- Space: O(1)
- Continue searching towards the right even after finding the key.
*/
int lastOcc(vector<int> &arr, int key){

    int s = 0;
    int e = arr.size() - 1;
    int ans = -1;

    while(s <= e){

        int mid = s + (e - s)/2;

        if(arr[mid] == key){

            ans = mid;
            s = mid + 1;
        }

        else if(arr[mid] > key)
            e = mid - 1;

        else
            s = mid + 1;
    }

    return ans;
}


/*
Count Occurrence
- Time : O(log n)
- Space: O(1)
- Uses First Occurrence and Last Occurrence.
*/
int countOcc(vector<int> &arr, int key){

    int first = firstOcc(arr, key);

    if(first == -1)
        return 0;

    int last = lastOcc(arr, key);

    return last - first + 1;
}


/*
STL Functions

binary_search(begin, end, key)
    -> Returns true/false

lower_bound(begin, end, key)
    -> First element >= key

upper_bound(begin, end, key)
    -> First element > key

Example:

int first = lower_bound(arr.begin(), arr.end(), key) - arr.begin();

int last = upper_bound(arr.begin(), arr.end(), key) - arr.begin() - 1;
*/