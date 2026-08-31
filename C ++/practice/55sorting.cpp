#include<iostream>
using namespace std;
#include<vector>

//merge sort

void merge(vector<int> arr, int st, int mid, int end){
    vector<int> temp;
    int i = st;
    int j = mid+1;

    while(i<=mid && j<=end){
        if(arr[i]>arr[j])   temp.push_back(arr[i++]);
        else temp.push_back(arr[j++]);
    }
    while(i<=mid)   temp.push_back(arr[i++]);
    while(j<=end)   temp.push_back(arr[j++]);

    for(int idx = 0; idx< temp.size(); idx++){
        arr[idx+st] = temp[idx];
    }
}

void mergeSort(vector<int> &arr, int st, int end){
    if(st<end){
        int mid = st + (end-st)/2;

        mergeSort(arr,st,mid);
        mergeSort(arr,mid+1,end);

        merge(arr, st, mid, end);
    }
}

//quick sort

int partition(vector<int> &arr,int st, int end){
    int idx = st-1 , pivot = arr[end];

    for(int j=st ; j<end ; j++){
        if(arr[j] < pivot){
            idx++;
            swap(arr[j], arr[idx]);
        }
    }
    idx++;
    swap(arr[end], arr[idx]);
    return idx;
}

void quickSort(vector<int> &arr, int st, int end){
    if(st<end){
        int pivIdx = partition(arr,st,end);

        quickSort(arr,st,pivIdx-1);
        quickSort(arr,pivIdx+1,end);
    }
}
