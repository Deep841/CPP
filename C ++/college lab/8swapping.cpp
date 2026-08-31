#include <iostream>
using namespace std;

// Function to swap elements at two indices
void swapElements(int arr[], int index1, int index2, int n) {
    // Check if indices are within bounds
    if (index1 < 0 || index1 >= n || index2 < 0 || index2 >= n) {
        cout << "Index out of bounds!" << endl;
        return;
    }

    // Swap elements
    int temp = arr[index1];
    arr[index1] = arr[index2];
    arr[index2] = temp;
}

// Function to display the array
void displayArray(const int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    displayArray(arr, n);

    // Swap elements at index 1 and 3
    swapElements(arr, 1, 3, n);

    cout << "Array after swapping elements at index 1 and 3: ";
    displayArray(arr, n);

    return 0;
}