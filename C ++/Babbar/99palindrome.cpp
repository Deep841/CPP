#include <iostream>
using namespace std;

// Node class
class Node {
public:
    int data;
    Node* next;

    // Constructor
    Node(int value) {
        data = value;
        next = nullptr;
    }
};

// Function to insert a new node at the end of the linked list
void insertNode(Node*& head, int value) {
    Node* newNode = new Node(value);
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

// Function to reverse a linked list
Node* reverseList(Node* head) {
    Node* prev = nullptr;
    Node* curr = head;
    Node* frwd = nullptr;

    while (curr != nullptr) {
        frwd = curr->next;  // Save next node
        curr->next = prev;  // Reverse the link
        prev = curr;        // Move prev forward
        curr = frwd;        // Move curr forward
    }
    return prev;  // Return the new head
}

// Function to check if the linked list is a palindrome
bool isPalindrome(Node* head) {
    if (head == nullptr || head->next == nullptr) {
        return true;  // Empty or single-node list is a palindrome
    }

    // Find the middle of the list
    Node* slow = head;
    Node* fast = head;

    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }

    // Reverse the second half of the list
    Node* secondHalf = reverseList(slow);

    // Compare the first and second halves
    Node* firstHalf = head;
    Node* temp = secondHalf;
    bool isPalindrome = true;
    while (temp != nullptr) {
        if (firstHalf->data != temp->data) {
            isPalindrome = false;
            break;
        }
        firstHalf = firstHalf->next;
        temp = temp->next;
    }

    // Restore the original list by reversing the second half back
    reverseList(secondHalf);

    return isPalindrome;
}

// Function to print the linked list
void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* head = nullptr;

    // Insert nodes
    insertNode(head, 1);
    insertNode(head, 2);
    insertNode(head, 3);
    insertNode(head, 2);
    insertNode(head, 1);

    cout << "Original List: ";
    printList(head);

    // Check if the linked list is a palindrome
    if (isPalindrome(head)) {
        cout << "The linked list is a palindrome." << endl;
    } else {
        cout << "The linked list is not a palindrome." << endl;
    }

    return 0;
}