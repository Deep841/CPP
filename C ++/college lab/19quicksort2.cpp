#include <iostream>
using namespace std;

int main() {
    int arr[] = {9, 2, 7, 1, 5, 9, 13}; // Array to be sorted
    int n = sizeof(arr) / sizeof(arr[0]); // Size of the array

    int start = 0; // Starting index
    int end = n - 1; // Ending index

    // Quick sort logic using while loop
    while (start < end) {
        int pivot = arr[end]; // Choosing the last element as pivot
        int i = start - 1; // Index of smaller element

        // Partitioning the array
        for (int j = start; j <= end - 1; j++) {
            if (arr[j] < pivot) {
                i++; // Increment index of smaller element
                swap(arr[i], arr[j]); // Swap current element with smaller element
            }
        }
        swap(arr[i + 1], arr[end]); // Place pivot in the correct position
        int pivotIndex = i + 1; // Pivot index after partition

        // Now sort the left part
        end = pivotIndex - 1; // Set new end to sort the left side

        // Process the right part in the next iteration
        // Check if there's anything to the right of the pivot
        if (pivotIndex + 1 < n) {
            start = pivotIndex + 1; // Move start to the right side
            end = n - 1; // Reset end to the last element
        } else {
            // If nothing to the right, we are done
            break;
        }
    }

    // Print sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
