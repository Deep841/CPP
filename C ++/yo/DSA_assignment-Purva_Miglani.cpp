/*
    Name: Purva Miglani
    DSA Assignment
    - this file contains both the question's code and a single int main for both.
*/

#include<iostream>
#include<map>
#include<vector>
#include<string>
#include<queue>
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


//functino to build tree
Node* buildTree(vector<string> &arr) {

    if (arr.size() == 0 || arr[0] == "null")
        return NULL;

    Node* root = new Node(stoi(arr[0]));
    queue<Node*> q;
    q.push(root);

    int i = 1;

    while (!q.empty() && i < arr.size()) {
        Node* curr = q.front();
        q.pop();

        // left child
        if (arr[i] != "null") {
            curr->l = new Node(stoi(arr[i]));
            q.push(curr->l);
        }
        i++;

        // right child
        if (i < arr.size() && arr[i] != "null") {
            curr->r = new Node(stoi(arr[i]));
            q.push(curr->r);
        }
        i++;
    }

    return root;
// Time: O(n), Space: O(n)
} 


//left view 
void lView(Node* root, vector<int> &ans) {
    if (!root) return;

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        int size = q.size();

        for (int i = 0; i < size; i++) {
            Node* curr = q.front();
            q.pop();

            if (i == 0)
                ans.push_back(curr->val);   // first visible

            if (curr->l) q.push(curr->l);
            if (curr->r) q.push(curr->r);
        }
    }
    //time com. is O(n) & space comp. is O(n)
}


//right view
void rView(Node* root, vector<int> &ans) {
    if (!root) return;

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        int size = q.size();

        for (int i = 0; i < size; i++) {
            Node* curr = q.front();
            q.pop();

            if (i == size - 1)
                ans.push_back(curr->val);

            if (curr->l) q.push(curr->l);
            if (curr->r) q.push(curr->r);
        }
    }
    //O(n) , O(n)
}


//top view 
void topView(Node* root, vector<int> &ans) {
    if (!root) return;

    map<int, int> mp;  
    queue<pair<Node*, int>> q;
    q.push({root, 0});

    while (!q.empty()) {
        auto temp = q.front();
        q.pop();

        Node* node = temp.first;
        int hd = temp.second;

        if (mp.find(hd) == mp.end())
            mp[hd] = node->val;

        if (node->l)  q.push({node->l, hd - 1});
        if (node->r) q.push({node->r, hd + 1});
    }

    for (auto &x : mp)
        ans.push_back(x.second);
    //   time = O(n log n) , space = O(n)
}


//bottom view
void bottomView(Node* root, vector<int> &ans) {
    if (!root) return;

    map<int, int> mp;  
    queue<pair<Node*, int>> q;
    q.push({root, 0});

    while (!q.empty()) {
        auto temp = q.front();
        q.pop();

        Node* node = temp.first;
        int hd = temp.second;

        mp[hd] = node->val;

        if (node->l)  q.push({node->l, hd - 1});
        if (node->r) q.push({node->r, hd + 1});
    }

    for (auto &x : mp)
        ans.push_back(x.second);
    //   time = O(n log n) & space = O(n)
}


//alternate levels 
void alternateLevels(Node* root, vector<int> &ans) {
    if (!root) return;

    queue<Node*> q;
    q.push(root);
    int level = 1;

    while (!q.empty()) {
        int size = q.size();
        vector<int> temp;

        for (int i = 0; i < size; i++) {
            Node* curr = q.front();
            q.pop();

            temp.push_back(curr->val);

            if (curr->l) q.push(curr->l);
            if (curr->r) q.push(curr->r);
        }

        if (level % 2 == 1) {  
            for (int x : temp)
                ans.push_back(x);
        }

        level++;
    }
    // time = O(n), space = O(n)
}
//overall time O(nlogn)
//overall space O(n)




//Now, the bonus question : Maximum Path Sum in a Binary Tree Using DFS (postorder traversal)
int maxSum;

//function to return the max downward path for each node while updating gloabl maxSum
int maxPathDown(Node* root) {

    if (root == NULL) return 0;//O(1), O(1) , checking for null node

    int left = max(0, maxPathDown(root->l));//O(n), O(h), recursively compute left downward sum, but ignore -ve(s)

    int right = max(0, maxPathDown(root->r));//O(n), O(h), recursively compute right dnward sum, but ignore -ve(s)

    maxSum = max(maxSum, left + right + root->val);//O(1), O(1), updating maxSum 

    return root->val + max(left, right); //O(1), O(1), returns the best single dwnrd to parent 
}

//fuinction to find max path sum, wrapper to call DFS and return answer
int maximumPathSum(Node* root) {

    maxSum = INT_MIN;//O(1) , O(1), intialise global ans to a v-small no.

    maxPathDown(root);// O(n), O(h), compute max dwnrd & update maxSum

    return maxSum;//O(1), O(1), returns final ans
}



int main() {

    cout << "nodes in lvl order : ";

    vector<string> arr;
    string s;

    // Taking level-order input until EOF (CTRL+D / CTRL+Z)
    while (cin >> s)
        arr.push_back(s);

    // Build the binary tree
    Node* root = buildTree(arr);

    // Storage vectors for all views
    vector<int> lAns, rAns, topAns, bottomAns, altAns;

    // Calling all required functions
    lView(root, lAns);
    rView(root, rAns);
    topView(root, topAns);
    bottomView(root, bottomAns);
    alternateLevels(root, altAns);

    // Printing outputs
    cout << "\nleft view: ";
    for (int x : lAns) cout << x << " ";

    cout << "\nright view: ";
    for (int x : rAns) cout << x << " ";

    cout << "\ntop view: ";
    for (int x : topAns) cout << x << " ";

    cout << "\nbottom view: ";
    for (int x : bottomAns) cout << x << " ";

    cout << "\nalternate levels: ";
    for (int x : altAns) cout << x << " ";

    // BONUS QUESTION OUTPUT ALSO PRINTED
    cout << "\nmaximum path sum: " << maximumPathSum(root);

    cout << endl;
    return 0;
}