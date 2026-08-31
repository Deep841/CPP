#include <iostream>
using namespace std;

// Function to swap alternate elements in the array
void swapAlternateElements(int arr[], int n) {
    // Traverse the array in steps of 2
    for (int i = 0; i < n - 1; i += 2) {
        // Swap elements at index i and i + 1
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }
}

// Function to display the array
void displayArray(const int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    displayArray(arr, n);

    swapAlternateElements(arr, n);

    cout << "Array after swapping alternate elements: ";
    displayArray(arr, n);

    return 0;
}