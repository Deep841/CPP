//Binary Tree

#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class node {
    public:
    int data;
    node* left;
    node* right;
    
    node(int data){
        this->data = data;
        left = right = NULL;
    }
};

static int idx = -1;
node* buildtree(vector<int> preorder){
    idx++;
    if(preorder[idx]==-1)   return NULL;

    node* root = new node(preorder[idx]);
    root->left = buildtree(preorder);
    root->right = buildtree(preorder);

    return root;
}
// above code is in linear tym complexity i.e. O(n)


//now pre-order traversal : Root, Left, Right
void preorderTraversal(node* root){
    if(root == NULL)    return;

    cout<<root->data<<" ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
    //O(n)
}


//inorder traversal : Left, Root, Right
void inorderTraversal(node* root){
    if(root == NULL)    return;

    inorderTraversal(root->left);
    cout<<root->data<<" ";
    inorderTraversal(root->right);

}


//postorder traversal : Left, Right, Root
void postorderTraversal(node* root){
    if(root==NULL)  return;

    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout<<root->data<<" ";
}


//levelorder Traversal
void levelorderTraversal(node* root){
    queue<node*> q;
    q.push(root);

    while(q.size()>0){
        node* curr = q.front();
        q.pop();
        cout<<curr->data<<" ";

        if(curr->left != NULL){
            q.push(curr->left);
        }
        if(curr->right != NULL){
            q.push(curr->right);
        }
    }
    cout<<endl;
}

//levelorder Traversal in line wise
void levelorderTraversal2(node* root){
    if(root == NULL) return;   // safety check

    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* curr = q.front();
        q.pop();

        if(curr == NULL){
            cout << endl;  // line break
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else {
            cout << curr->data << " ";  // 👉 ye missing tha

            if(curr->left != NULL){
                q.push(curr->left);
            }
            if(curr->right != NULL){
                q.push(curr->right);
            }
        }
    }
}

//level order traversal 2 again
void levelorderTraversal3(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(q.size() > 0){
        node* curr = q.front();
        q.pop();

        if(curr == NULL){
            if(!q.empty()){
                cout<<endl;
                q.push(NULL);
                continue;
            }
            else{
                break;
            }
        }

        cout<< curr->data << " ";

        if(curr->left != NULL){
            q.push(curr->left);
        }
        if(curr->right != NULL){
            q.push(curr->right);
        }
    }
    cout<<endl;
}


int main() {
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    node* root = buildtree(preorder);

    preorderTraversal(root);
    cout << endl;


    inorderTraversal(root);
    cout << endl;

    postorderTraversal(root);
    cout<<endl;

    levelorderTraversal(root);
    
    levelorderTraversal2(root);

    levelorderTraversal3(root);

    return 0;
}