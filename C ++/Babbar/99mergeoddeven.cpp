#include <iostream>
using namespace std;

// Definition for singly-linked list node using class
class ListNode {
public:
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

// Function to merge two linked lists (odd and even)
ListNode* mergeOddEven(ListNode* odd, ListNode* even) {
    if (!odd) return even;
    if (!even) return odd;

    // Traverse to the end of the odd list
    ListNode* temp = odd;
    while (temp->next) {
        temp = temp->next;
    }

    // Connect the end of odd list to the start of even list
    temp->next = even;

    return odd;
}

// Utility function to print the linked list
void printList(ListNode* head) {
    while (head != nullptr) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

// Utility function to create a new node
ListNode* createNode(int val) {
    return new ListNode(val);
}

// Main function to test the merge
int main() {
    // Create sample odd and even linked lists
    ListNode* odd = createNode(1);
    odd->next = createNode(3);
    odd->next->next = createNode(5);
    odd->next->next->next = createNode(7);

    ListNode* even = createNode(2);
    even->next = createNode(4);
    even->next->next = createNode(6);
    even->next->next->next = createNode(8);

    // Merge the lists
    ListNode* mergedList = mergeOddEven(odd, even);

    // Print the merged list
    cout << "Merged List: ";
    printList(mergedList);

    return 0;
}