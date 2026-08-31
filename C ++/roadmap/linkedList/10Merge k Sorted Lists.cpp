/*
Merge k Sorted Lists :
- https://leetcode.com/problems/merge-k-sorted-lists/description/
- first approach :
    add all elts of LL in an array then sort the array and convert the array into LL
    (bekar)

- Step-by-Step Approach:
	1.	Create a min-heap (priority queue) that stores the head nodes of all k lists, sorted by their value.
	2.	Initialize a dummy node to build the final answer.
	3.	Pop the smallest node from the heap and add it to your merged list.
	4.	If that node has a next, push the next node into the heap.
	5.	Repeat until the heap is empty.
	6.	Return dummy->next.


- A min-heap is a binary heap where:
	•	The smallest element is always at the top.
	•	Every parent node is less than or equal to its child nodes.
- By default, C++’s priority_queue is a max-heap, but we can convert it into a min-heap using a custom comparator.
    priority_queue<int, vecotr<int>, greater<int>>minheap;
*/

#include<iostream>
#include<vector>
#include<queue>  // Required for priority_queue
using namespace std;

class ListNode {
public:
    int val;
    ListNode* next;

    ListNode(int val) {
        this->val = val;
        this->next = NULL;
    }

    ~ListNode() {
        // Optional: add delete next; if you want to free full list
    }
};

// Custom comparator for min-heap
struct compare {
    bool operator()(ListNode* a, ListNode* b) {
        return a->val > b->val;
    }
};

ListNode* mergeKSortedLists(vector<ListNode*> &lists) {
    priority_queue<ListNode*, vector<ListNode*>, compare> minHeap;

    // Step 1: Add first element of all k lists to the minHeap
    for (auto listhead : lists) {
        if (listhead != nullptr) {
            minHeap.push(listhead);
        }
    }

    // Step 2: Create dummy node
    ListNode* dummy = new ListNode(-1);
    ListNode* tail = dummy;

    // Step 3: Process the minHeap
    while (!minHeap.empty()) {
        ListNode* smallest = minHeap.top();
        minHeap.pop();

        tail->next = smallest;
        tail = tail->next;

        // Push the next node of the popped list into the heap
        if (smallest->next != NULL) {
            minHeap.push(smallest->next);
        }
    }

    return dummy->next;
}