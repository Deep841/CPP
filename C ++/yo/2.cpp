#include<iostream>
#include<map>
#include<vector>
#include<string>
#include<queue>
#include<algorithm>
using namespace std;
// node structure : 
struct Node {
    int val;
    Node *l, *r;
    
    Node(int x) {
        val = x;
        l = NULL;
        r = NULL;
    }
};
// Bonus Question: Maximum Path Sum
int maxSum;
// function to return the max downward path for each node while updating global maxSum
int maxPathDown(Node* root) {
    if (root == NULL) 
        return 0;   // O(1), O(1), checking for null node
    int left = max(0, maxPathDown(root->l));  
    // O(n), O(h), recursively compute left downward sum, ignore negative paths
    int right = max(0, maxPathDown(root->r)); 
    // O(n), O(h), recursively compute right downward sum, ignore negative paths
    // update maxSum with best possible path through current node
    maxSum = max(maxSum, left + right + root->val);  
    // O(1), O(1), updating global maximum
    // return the best single downward path to parent
    return root->val + max(left, right);  
    // O(1), O(1)
}
// function to find max path sum, wrapper to call DFS and return answer
int maximumPathSum(Node* root) {
    maxSum = INT_MIN;// O(1), O(1), initialize global answer to a very small number
    maxPathDown(root);// O(n), O(h), compute max downward path and update maxSum
    return maxSum;// O(1), O(1)
}
int main() {
    // Build this sample tree for testing BONUS Q:
    // -10 9 20 null null 15 7
    Node* root = new Node(-10);
    root->l = new Node(9);
    root->r = new Node(20);
    root->r->l = new Node(15);
    root->r->r = new Node(7);
    cout << "Maximum Path Sum: " << maximumPathSum(root) << endl;
    return 0;
}