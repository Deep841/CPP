#include<iostream>
#include<vector>
using namespace std;

//Linear search : O(n), O(1) unsorted array, small data, one time search
int linearSearch(vector<int>& arr, int key){
    for(int i=0; i<arr.size();i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}

//Binary Search : O(logn), O(1), mini speed. allocate pages, aggressive cows
int binarySearch(vector<int> &arr, int key){
    int st=0, end=arr.size()-1;

    while(st<=end){
        int mid = st + (end-st)/2;

        if(arr[mid] == key) return mid;
        else if(arr[mid] > key) end = mid-1;
        else    st = mid+1;
    }
    return -1;
}

//First Occurrence
int firstOccurrence(vector<int> &arr, int key){
    int l=0, r=arr.size()-1, ans=-1;

    while(l <= r){
        int mid = l + (r-l)/2;
        if(arr[mid]==key){
            ans = mid;
            r = mid - 1;
        }
        else if (arr[mid] < key)    l=mid+1;
        else    r = mid-1;
    }
    return -1;
}

//Last Occurrence
int lastOccurrence(vector<int> & arr, int key){
    int l=0, r=arr.size()-1, ans=-1;

    while(l<=r){
        int mid = l + (r-l)/2;

        if(arr[mid] == key){
            ans=mid;
            l = mid+1;
        }
        else if (arr[mid] > key)    l = mid+1;
        else    r=mid-1;
    }
    return -1;
}