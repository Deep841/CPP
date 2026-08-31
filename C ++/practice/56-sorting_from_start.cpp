#include<iostream>
#include<vector>
using namespace std;

// O(n^2), O(1), biggest elt at last
void bubbleSort(int arr[], int n){
    for(int i=0 ; i<n-1; i++){
        bool isSwap = false;
        for(int j=0; j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                isSwap=true;
            }
        }
        if(!isSwap) return;
    }
}

// O(n^2), O(1), smallest elt at first, use when swaps r costly
void selectionSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int smallestIdx = i;
        for(int j=i; j<n; j++){
            if(arr[j]<arr[smallestIdx])
                smallestIdx=j;
        }
        swap(arr[i], arr[smallestIdx]);
    }
}

// O(n^2), O(1), O(n)=best, pick one elt and insert it at correct position, 
//use when nearly sorted, small dataset, used insed TimSort
void insertionSort(int arr[], int n){
    for(int i=1; i<n; i++){
        int curr = arr[i];
        int prev = i-1;

        while(prev>=0 && arr[prev]>curr){
            arr[prev+1]=arr[prev];
            prev--;
        }
        arr[prev+1]=curr;
    }
}

//merge sort
//O(NlogN), O(N), used when large dataset
void mergeSort(vector<int> & arr, int st, int end){
    if(st<end){
        int mid = st + (end-st)/2;

        mergeSort(arr,st,mid);
        mergeSort(arr,mid+1,end);

        merge(arr,st,mid,end);
    }
}

void merge(vector<int>& arr, int st, int mid, int end){
    vector<int> temp;
    int i = st, j = mid + 1;

    while(i <= mid && j <= end){
        if(arr[i] <= arr[j])
            temp.push_back(arr[i++]);
        else
            temp.push_back(arr[j++]);
    }

    while(i <= mid) temp.push_back(arr[i++]);
    while(j <= end) temp.push_back(arr[j++]);

    for(int k = 0; k < temp.size(); k++){
        arr[st + k] = temp[k];
    }
}

//Quick sort O(nlogn), O(1)
int partition(vector<int>& arr, int st, int end){
    int pivot = arr[end];
    int idx = st - 1;

    for(int i = st; i < end; i++){
        if(arr[i] <= pivot){
            idx++;
            swap(arr[i], arr[idx]);
        }
    }
    swap(arr[idx + 1], arr[end]);
    return idx + 1;
}

void quickSort(vector<int>& arr, int st, int end){
    if(st < end){
        int pivIdx = partition(arr, st, end);
        quickSort(arr, st, pivIdx - 1);
        quickSort(arr, pivIdx + 1, end);
    }
}

/*
STL Sort
sort(arr.begin(), arr.end());
Based on Introsort : quick + heap + insertion
O(nlogn)
*/