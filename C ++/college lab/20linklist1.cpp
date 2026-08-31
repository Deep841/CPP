#include <iostream>
using namespace std;

// Node structure for linked list
struct Node {
    int data;         // To store the data of the node
    Node* next;       // Pointer to the next node

    // Constructor to create a new node
    Node(int val) {
        data = val;
        next = nullptr;  // Next pointer initially set to nullptr
    }
};

// Function to insert a new node at the end of the linked list
void insertAtEnd(Node*& head, int value) {
    Node* newNode = new Node(value);  // Create a new node
    if (head == nullptr) {
        head = newNode;  // If the list is empty, the new node is the head
    } else {
        Node* temp = head;
        while (temp->next != nullptr) {  // Traverse to the last node
            temp = temp->next;
        }
        temp->next = newNode;  // Attach the new node at the end
    }
}

// Function to print the linked list
void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";  // Print the data
        temp = temp->next;  // Move to the next node
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;  // Initially, the list is empty

    // Insert nodes into the linked list
    insertAtEnd(head, 10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 30);
    insertAtEnd(head, 40);

    // Print the linked list
    cout << "Linked list: ";
    printList(head);

    return 0;
}