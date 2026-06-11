#include<iostream>
#include<algorithm>
using namespace std;


//Bubble Sort 
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

//Selection Sort
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

//Insertion Sort
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

//Merge Sort