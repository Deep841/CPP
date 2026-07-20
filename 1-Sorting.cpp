/*
1. In-place means no extra array is needed for sorting (O(1) extra space).
2. Stable means: a stable sorting algorithm preserves the original relative order
   of elements having equal values (keys).
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Forward Declarations
void merge(vector<int> &arr, int st, int mid, int e);
int partition(vector<int> &arr, int st, int e);

/*
Bubble Sort
- Time: O(n²), Best: O(n)
- Space: O(1)
- Adjacent elements are compared and the largest element "bubbles up" to the end.
- Stable
- In-place
- Adaptive (Best Case O(n))
- Not suitable for large datasets
*/
void bubbleSort(int arr[], int n){
    for(int i = 0; i < n - 1; i++){
        bool isSwap = false;

        for(int j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1]);
                isSwap = true;
            }
        }

        if(!isSwap)
            return;
    }
}


/*
Selection Sort
- Time: O(n²)
- Space: O(1)
- Find the smallest element and place it at the correct position.
- In-place
- Not Stable (relative order of equal elements may change)
- Not Adaptive (already sorted array still takes O(n²))
- Performs fewer swaps than Bubble Sort
*/
void SelectionSort(int arr[], int n){
    for(int i = 0; i < n - 1; i++){

        int smallestIdx = i;

        for(int j = i + 1; j < n; j++){
            if(arr[j] < arr[smallestIdx]){
                smallestIdx = j;
            }
        }

        swap(arr[i], arr[smallestIdx]);
    }
}


/*
Insertion Sort
- Worst/Average Time: O(n²)
- Best Time: O(n)
- Space: O(1)
- Virtually splits the array into sorted and unsorted parts.
- Picks one element from the unsorted part and inserts it into the correct position.
- Stable
- In-place
- Adaptive
- Very fast for nearly sorted arrays because of very little shifting.
- Used in TimSort (Python) for small runs.
- Used inside Introsort (std::sort) for very small partitions.
*/
void InsertionSort(int arr[], int n){

    for(int i = 1; i < n; i++){

        int curr = arr[i];
        int prev = i - 1;

        while(prev >= 0 && arr[prev] > curr){
            arr[prev + 1] = arr[prev];
            prev--;
        }

        arr[prev + 1] = curr;
    }
}


/*
Merge Sort
- Time: O(n log n) in Best, Average and Worst Case
- Space: O(n)
- Divide and Conquer
- Stable
- Not In-place
- Used in:
    * External Sorting
    * Huge Files
    * Databases
    * Linked Lists
*/
void MergeSort(vector<int> &arr, int st, int e){

    if(st < e){

        int mid = st + (e - st)/2;

        MergeSort(arr, st, mid);
        MergeSort(arr, mid + 1, e);

        merge(arr, st, mid, e);
    }
}

void merge(vector<int> &arr, int st, int mid, int e){

    vector<int> temp;

    int i = st;
    int j = mid + 1;

    while(i <= mid && j <= e){

        if(arr[i] <= arr[j])
            temp.push_back(arr[i++]);
        else
            temp.push_back(arr[j++]);
    }

    while(i <= mid)
        temp.push_back(arr[i++]);

    while(j <= e)
        temp.push_back(arr[j++]);

    for(int idx = 0; idx < temp.size(); idx++){
        arr[st + idx] = temp[idx];
    }
}


/*
Quick Sort
- Best Time: O(n log n)
- Average Time: O(n log n)
- Worst Time: O(n²)
- Space: O(log n) (recursion stack)
- Divide and Conquer
- Choose a Pivot
- Partition the array around the Pivot
- Recursively sort left and right halves
- In-place
- Not Stable
- Very fast in practice because of good cache locality
- Worst case occurs when Pivot selection is poor
*/
void QuickSort(vector<int> &arr, int st, int e){

    if(st < e){

        int pivIdx = partition(arr, st, e);

        QuickSort(arr, st, pivIdx - 1);
        QuickSort(arr, pivIdx + 1, e);
    }
}

int partition(vector<int> &arr, int st, int e){

    int pivot = arr[e];
    int idx = st - 1;

    for(int j = st; j < e; j++){

        if(arr[j] <= pivot){

            idx++;
            swap(arr[idx], arr[j]);
        }
    }

    idx++;
    swap(arr[idx], arr[e]);

    return idx;
}


/*
STL sort()
- Time: O(n log n)
- Uses Introsort
    * Quick Sort
    * Heap Sort
    * Insertion Sort
*/
// sort(arr.begin(), arr.end());