#include <iostream>
#include <algorithm>  // for std::swap

// QuickSort logic directly inside the main function
void quicksort(int arr[], int low, int high) {
    if (low < high) {
        int pivot = arr[high];  // Last element as pivot
        int i = low - 1;

        // Partitioning the array
        for (int j = low; j < high; j++) {
            if (arr[j] <= pivot) {
                i++;
                std::swap(arr[i], arr[j]);
            }
        }
        std::swap(arr[i + 1], arr[high]);  // Put pivot in correct place
        int pi = i + 1;  // Partition index

        // Recursively sort elements before and after partition
        quicksort(arr, low, pi - 1);  // Left side
        quicksort(arr, pi + 1, high);  // Right side
    }
}

int main() {
    int arr[] = {10, 80, 30, 90, 40, 50, 70};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Call quicksort
    quicksort(arr, 0, n - 1);

    // Output the sorted array
    std::cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}