#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* next;

    // Constructor
    node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

node* reverse1(node* head){
    //base case
    if(head==NULL || head->next==NULL){
        return head;
    }

    node* chotahead = reverse1(head->next);

    head->next->next = head;
    head->next=NULL;

    return chotahead;
}

node* reverseLinkedList(node *  head){
    return reverse1(head);
}

void insertAtHead(node*& head, int d) {
    node* temp = new node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(node*& tail, int d) {
    node* temp = new node(d);
    tail->next = temp;
    tail = temp;
}

void print(node* head) { // No need for reference here
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertAtPosition(node*& tail, node*& head, int position, int d) {
    // Insert at the start
    if (position == 1) {
        insertAtHead(head, d);
        return;
    }

    node* temp = head;
    int cnt = 1;

    // Traverse to the position just before the desired one
    while (cnt < position - 1 && temp != NULL) {
        temp = temp->next;
        cnt++;
    }

    // If inserting at the last position
    if (temp == NULL || temp->next == NULL) {
        insertAtTail(tail, d);
        return;
    }

    // Create a node for d
    node* nodeToInsert = new node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

int main() {
    node* node1 = new node(10);

    node* tail = node1;
    node* head = node1;

    print(head);

    insertAtHead(head, 15);
    print(head);

    insertAtTail(tail, 20);
    print(head);

    insertAtPosition(tail, head, 4, 22);
    print(head);

    cout << "head " << head->data << endl;
    cout << "tail " << tail->data << endl;

    head = reverse1(head); // Update head to the reversed list
    print(head);

}