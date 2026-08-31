#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

// Function to print the linked list
void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Function to insert a node at the end of the linked list
void insert(Node*& head, int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = nullptr;
    
    if (head == nullptr) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

// Function to get the length of the linked list
int getLength(Node* head) {
    int length = 0;
    Node* temp = head;
    while (temp != nullptr) {
        length++;
        temp = temp->next;
    }
    return length;
}

// Bubble Sort function for linked list
void bubbleSort(Node* head) {
    if (head == nullptr) return;

    int length = getLength(head);

    for (int i = 0; i < length - 1; i++) {
        Node* current = head;
        Node* next = head->next;
        Node* prev = nullptr;

        while (next != nullptr) {
            if (current->data > next->data) {
                // Swap the nodes
                if (prev == nullptr) {
                    // If swapping involves the head node
                    head = next;
                } else {
                    prev->next = next;
                }
                current->next = next->next;
                next->next = current;

                // Update 'next' to the correct position
                next = current->next;
            } else {
                // Move to the next pair of nodes
                prev = current;
                current = next;
                next = next->next;
            }
        }
    }
}

int main() {
    Node* head = nullptr;

    // Insert nodes into the linked list
    insert(head, 4);
    insert(head, 2);
    insert(head, 5);
    insert(head, 1);
    insert(head, 3);

    cout << "Linked List before sorting: ";
    printList(head);

    // Sort the linked list using bubble sort
    bubbleSort(head);

    cout << "Linked List after sorting: ";
    printList(head);

    return 0;
}