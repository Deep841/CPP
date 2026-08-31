#include <iostream>
using namespace std;

void removeDuplicates(int arr[], int &n) {
    // Traverse the array
    int newSize = n; // Start with the full size of the array
    for (int i = 0; i < newSize; i++) {
        for (int j = i + 1; j < newSize; j++) {
            if (arr[i] == arr[j]) {
                // Shift elements to remove duplicate
                for (int k = j; k < newSize - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                newSize--; // Reduce the size of the array
                j--; // Check the new element at index j
            }
        }
    }
    n = newSize; // Update the size of the array
}

void displayArray(const int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {4, 5, 6, 6, 2, 1, 4, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    displayArray(arr, n);

    removeDuplicates(arr, n);

    cout << "Array after removing duplicates: ";
    displayArray(arr, n);

    return 0;
}
