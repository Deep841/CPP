#include<iostream>
#include<vector>
using namespace std;

void bubblesort(vector<int> &arr, int n){
    for(int i=0; i< n-1; i++){
        bool isSwaped = false;
        for(int j=0;j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                isSwaped=true;
            }
        }
        if(!isSwaped){
            return;
        }
    }
}

void selectionsort(vector<int> &arr, int n){
    for(int i =0 ; i< n-1 ; i++){
        int smallestIdx = i;
        for(int j = 0 ; j<n-i-1;j++){
            if(arr[j]<arr[smallestIdx]){
                smallestIdx=j;
            }
        }
        swap(arr[i],arr[smallestIdx]);
    }
}

void insertionsort(vector<int> &arr, int n){
    for(int i = 0; i<n; i++){
        int curr = arr[i];
        int prev = i-1;
        
        while(prev>=0 && arr[prev]>curr){
            arr[prev+1]=curr;
            prev--;
        }
        arr[prev+1]=curr;
    }
}

void merge(vector<int> &arr, int st, int mid, int e){
    int i = st, j=mid;

    vector<int> temp;

    while(i<=mid && j<=e){
        if(arr[i]<arr[j])   temp.push_back(arr[i++]);
        else    temp.push_back(arr[j++]);
    }

    if(i<=mid)  temp.push_back(arr[i++]);
    if(j<=e)    temp.push_back(arr[j++]);

    for(int idx = 0 ; idx < temp.size(); idx++){
        arr[st+idx]=temp[idx];
    }
}
void mergesort(vector<int> &arr , int st, int e){
    while(st<e){
        int mid = st + (e-st)/2;

        mergesort(arr,st,mid);
        mergesort(arr,mid+1,e);
        merge(arr,st,mid,e);
    }
}

