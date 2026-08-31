//repeadetedly swap two adjacent elts if they are in wrong order.
//Bubble sort works by repeatedly traversing the list and swapping adjacent elements if they are in the wrong order.

// Code Explanation
// 	1.	Node Structure: Each node has a data part and a pointer to the next node.
// 	2.	Insertion at the End: Adds a new node to the end of the list.
// 	3.	Bubble Sort: Swaps data of adjacent nodes to sort the list in ascending order.
// 	4.	Display Function: Prints the sorted list.

#include <iostream>
using namespace std;

// Definition of a node in the linked list
struct Node {
    int data;
    Node* next;

    Node(int val) : data(val), next(nullptr) {}  // Node constructor
};

// Function to insert a node at the end of the list
void insertAtEnd(Node*& head, int val) {
    Node* newNode = new Node(val);

    if (head == nullptr) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Function to display the linked list
void display(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Bubble Sort function for the linked list
void bubbleSort(Node* head) {
    if (head == nullptr) return;

    bool swapped;
    Node* current;
    Node* last = nullptr;

    do {
        swapped = false;
        current = head;

        while (current->next != last) {
            if (current->data > current->next->data) {
                // Swap the data of current node and next node
                swap(current->data, current->next->data);
                swapped = true;
            }
            current = current->next;
        }
        last = current;  // Update the last sorted node
    } while (swapped);
}

// Main function
int main() {
    Node* head = nullptr;

    // Insert elements into the linked list
    insertAtEnd(head, 4);
    insertAtEnd(head, 2);
    insertAtEnd(head, 5);
    insertAtEnd(head, 1);
    insertAtEnd(head, 3);

    cout << "Original list: ";
    display(head);

    // Sort the list
    bubbleSort(head);

    cout << "Sorted list: ";
    display(head);

    return 0;
}
