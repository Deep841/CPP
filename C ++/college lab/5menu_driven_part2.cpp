#include <iostream>
using namespace std;

void insertElement(int arr[], int &n, int element, int position) {
    if (position < 1 || position > n + 1) {
        cout << "Invalid position!" << endl;
        return;
    }
    for (int i = n; i >= position; i--)//loop n se postion pe ja rha h aur position-1 pe elt daale/insert kr rhe h.
        arr[i] = arr[i - 1];
    arr[position - 1] = element;
    n++;
}

void deleteElement(int arr[], int &n, int position) {
    if (position < 1 || position > n) {
        cout << "Invalid position!" << endl;
        return;
    }
    for (int i = position - 1; i < n - 1; i++)
        arr[i] = arr[i + 1];
    n--;
}

void displayArray(int arr[], int n) {
    if (n == 0) {
        cout << "Array is empty." << endl;
        return;
    }
    cout << "Array elements are: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int searchElement(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key)
            return i + 1;
    }
    return -1;
}

void updateElement(int arr[], int n, int position, int newValue) {
    if (position < 1 || position > n) {
        cout << "Invalid position!" << endl;
        return;
    }
    arr[position - 1] = newValue;
}

int main() {
    int arr[100], n = 0, choice, element, position, key, newValue;

    do {
        cout << "\nMenu:\n";
        cout << "1. Insert element\n";
        cout << "2. Delete element\n";
        cout << "3. Display array\n";
        cout << "4. Search element\n";
        cout << "5. Update element\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter element to insert: ";
            cin >> element;
            cout << "Enter position: ";
            cin >> position;
            insertElement(arr, n, element, position);
            break;

        case 2:
            cout << "Enter position of element to delete: ";
            cin >> position;
            deleteElement(arr, n, position);
            break;

        case 3:
            displayArray(arr, n);
            break;

        case 4:
            cout << "Enter element to search: ";
            cin >> key;
            position = searchElement(arr, n, key);
            if (position != -1)
                cout << "Element found at position " << position << endl;
            else
                cout << "Element not found" << endl;
            break;

        case 5:
            cout << "Enter position to update: ";
            cin >> position;
            cout << "Enter new value: ";
            cin >> newValue;
            updateElement(arr, n, position, newValue);
            break;

        case 6:
            cout << "Exiting..." << endl;
            break;

        default:
            cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 6);

    return 0;
}
