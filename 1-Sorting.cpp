#include<iostream>
#include<algorithm>
using namespace std;


//Bubble Sort - O(n^2), O(1)
void bubbleSort(int arr[], int n){
    for (int i = 0; i < n-1; i++){
        bool isSwap = false;
        for(int j = 0 ; j < n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                isSwap=true;
                //int temp = arr[i]; arr[i]=arr[j+1]; arr[j+1]=temp; 
            }
        }
        if(!isSwap) return;
    }
}

//Selection Sort - O(n^2), O(1)
void SelectionSort(int arr[], int n){
    for(int i = 0; i<n-1; i++){
        int smallestIdx = i;
        for(int j=i+1; j<n; j++){
            if (arr[j]<arr[smallestIdx]){
                smallestIdx=j;
            }
        }
        swap(arr[i],arr[smallestIdx]);
    }
}

//Insertion Sort - O(n^2), O(1), O(n)=best
void InsertionSort(int arr[],int n){
    for(int i=1; i<n; i++){
        int curr = arr[i];
        int prev = i - 1;

        while(prev >= 0 && arr[prev] > curr){
            arr[prev+1] = arr[prev];
            prev--;
        }
        arr[prev + 1] = curr;
    }
}

//Merge Sort - O(nlogn), O(n)
void MergeSort(vector<int> &arr, int st, int e){
    if(st<e){
        int mid = st + (e - st)/2;
        MergeSort(arr,st,mid);
        MergeSort(arr,mid+1,e);

        merge(arr,st,mid,e);
    }
}

void merge(vector<int> &arr, int st, int mid, int e){
    vector<int> temp;
    int i = st, j = mid;

    while(i<=mid && j<=e){
        if(arr[i] > arr[j]) temp.push_back(arr[i++]);
        else temp.push_back(arr[j++]);
    }

    while(i<=mid)   temp.push_back(arr[i++]);
    while(j<=e)   temp.push_back(arr[j++]);

    for(int idx=0; idx<temp.size(); idx++){
        arr[idx+st] = temp[idx];
    }
}

/*
Quick Sort
Best Case:      O(n log n)
Average Case:   O(n log n)
Worst Case:     O(n²)
Space:          O(log n)    due to recursion stack
*/
void QuickSort(vector<int> &arr, int st,int e){
    if(st<e){
        int pivIdx = partition(arr, st, e);

        QuickSort(arr, st, pivIdx-1);
        QuickSort(arr, pivIdx+1,e);
    }
}

int partition(vector<int> &arr, int st, int e){
    int idx = st-1, pivot = arr[e];

    for(int j=st; j<e; j++){
        if(arr[j]<=pivot){
            idx++;
            swap(arr[j], arr[idx]);
        }
    }
    idx++;
    swap(arr[e],arr[idx]);
    return idx;
}