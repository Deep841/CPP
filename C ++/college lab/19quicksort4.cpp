#include <iostream>
using namespace std;

// Function to swap two elements
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

// Function for the partition process with the first element as the pivot
int partition(int arr[], int start, int end) {
    int pivot = arr[start];  // Pivot is the first element
    int low = start + 1;     // Start from the second element
    int high = end;

    while (low <= high) {
        while (low <= high && arr[low] <= pivot) {
            low++;  // Move right if the element is smaller or equal to pivot
        }
        while (low <= high && arr[high] > pivot) {
            high--;  // Move left if the element is larger than pivot
        }
        if (low < high) {
            swap(arr[low], arr[high]);  // Swap out-of-place elements
        }
    }
    swap(arr[start], arr[high]);  // Place pivot in the correct position
    return high;  // Return the pivot index
}

// QuickSort function
void quickSort(int arr[], int start, int end) {
    if (start < end) {
        int pi = partition(arr, start, end);  // Get pivot index

        quickSort(arr, start, pi - 1);  // Recursively sort the left side of the pivot
        quickSort(arr, pi + 1, end);    // Recursively sort the right side of the pivot
    }
}

// Function to print the array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {9, 7, 2, 5, 13, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, n);

    quickSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}