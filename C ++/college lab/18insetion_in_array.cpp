#include <iostream>
using namespace std;

int main() {
    int arr[10] = {1, 2, 3, 4, 5}; // array with 5 elements and capacity of 10
    int size = 5; // current size
    int pos = 2; // index where we want to insert
    int value = 10; // value to insert

    // Shift elements to the right
    for (int i = size; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new value at position
    arr[pos] = value;
    size++; // increment size

    // Print the array after insertion
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}