#include <iostream>
using namespace std;

#define MAX 100 // Maximum size of the stack

class Stack {
    int top; // Index of the top element in the stack
    int arr[MAX]; // Array to hold stack elements

public:
    Stack() : top(-1) {} // Constructor to initialize top

    // Function to push an element onto the stack
    void push(int value) {
        if (top >= MAX - 1) {
            cout << "Stack Overflow!" << endl;
        } else {
            arr[++top] = value;
            cout << value << " pushed to stack" << endl;
        }
    }

    // Function to pop an element from the stack
    void pop() {
        if (top < 0) {
            cout << "Stack Underflow!" << endl;
        } else {
            cout << arr[top--] << " popped from stack" << endl;
        }
    }

    // Function to peek at the top element of the stack
    void peek() {
        if (top < 0) {
            cout << "Stack is empty!" << endl;
        } else {
            cout << "Top element is " << arr[top] << endl;
        }
    }

    // Function to check if the stack is empty
    bool isEmpty() {
        return top < 0;
    }
};

int main() {
    Stack s;
    int choice, value;

    do {
        cout << "\nMenu:" << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Peek" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: // Push
                cout << "Enter value to push: ";
                cin >> value;
                s.push(value);
                break;

            case 2: // Pop
                s.pop();
                break;

            case 3: // Peek
                s.peek();
                break;

            case 4: // Exit
                cout << "Exiting..." << endl;
                break;

            default:
                cout << "Invalid choice!" << endl;
                break;
        }
    } while (choice != 4);

    return 0;
}