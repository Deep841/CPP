#include <iostream>
using namespace std;

// Definition for singly-linked list node using class
class ListNode {
public:
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

// Function to merge two linked lists (odd and even) alternately
ListNode* mergeOddEvenAlternately(ListNode* odd, ListNode* even) {
    ListNode* mergedHead = nullptr;
    ListNode* mergedTail = nullptr;

    // Alternating merge of odd and even nodes
    while (odd != nullptr && even != nullptr) {
        if (mergedHead == nullptr) {
            mergedHead = odd;
            mergedTail = odd;
            odd = odd->next;
        } else {
            mergedTail->next = odd;
            mergedTail = mergedTail->next;
            odd = odd->next;
        }

        mergedTail->next = even;
        mergedTail = mergedTail->next;
        even = even->next;
    }

    // Attach the remaining nodes (if any)
    if (odd != nullptr) {
        mergedTail->next = odd;
    } else if (even != nullptr) {
        mergedTail->next = even;
    }

    return mergedHead;
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

    // Merge the lists alternately
    ListNode* mergedList = mergeOddEvenAlternately(odd, even);

    // Print the merged list
    cout << "Merged List: ";
    printList(mergedList);

    return 0;
}