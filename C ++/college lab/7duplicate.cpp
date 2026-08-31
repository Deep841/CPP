#include <iostream>
#include <unordered_set>
using namespace std;

void removeDuplicates(int arr[], int &n) {
    unordered_set<int> seen; // Set to track unique elements
    int index = 0; // Index for placing unique elements in the array

    for (int i = 0; i < n; i++) {
        // If the element is not in the set, it's unique
        if (seen.find(arr[i]) == seen.end()) {
            seen.insert(arr[i]);
            arr[index++] = arr[i]; // Place unique element in the array
        }
    }

    // Update the size of the array
    n = index;
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