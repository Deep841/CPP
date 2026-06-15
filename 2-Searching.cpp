#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


// Linear Search - O(n), O(1), Unsorted array, small data, one tym search

int linearSearch(vector<int> &arr, int key){
    for (int i=0; i<arr.size(); i++){
        if(arr[i] == key){return i;
        }
    }
    return -1;
}

//Binary Search - O(log n), O(1), minimum speed, allocate pages, aggresive cows 
// works on sorted array
int Binary(vector<int> &arr, int key){
    int s=0, e=arr.size()-1;

    while(s<=e){
        int mid = s + (e-s)/2;

        if(arr[mid]==key)   return mid;
        else if (arr[mid] > key){
            e=mid-1;
        }
        else s=mid+1;
    }
    return -1;
}


//Q- First Occurrence
int firstOcc(vector<int> &arr, int key){
    int s=0, e=arr.size()-1,ans=-1;

    while(s<=e){
        int mid = s + (e-s)/2;

        if(arr[mid]==key){
            ans=mid;
            e = mid -1;
        }
        else if(arr[mid] > key){
            e = mid -1;
        }
        else{
            s=mid+1;
        }
    }
    return ans;
}

//Q- last Occurrence
int lastOcc(vector<int>&arr, int key){
    int s=0,e=arr.size()-1,ans=-1;
    while(s<=e){
        int mid = s + (e-s)/2;

        if(arr[key]==mid){
            ans=mid;
            s=mid+1;
        }
        else if (arr[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return ans;
}

//Q- Count of Occurrence
int countOcc(vector<int> &arr, int key){
    int first = firstOcc(arr,key);
    int last = lastOcc(arr, key);

    if(first==-1)  return 0;
    return last-first+1;
}
