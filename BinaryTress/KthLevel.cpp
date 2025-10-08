#include<iostream>
#include<vector>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

// Static index to track position in preorder vector
static int idx = -1;

// Build tree from preorder traversal with -1 representing NULL
Node* buildTree(const vector<int>& preorder) {
    idx++;
    if (idx >= preorder.size() || preorder[idx] == -1) {
        return NULL;
    }

    Node* newNode = new Node(preorder[idx]);
    newNode->left = buildTree(preorder);
    newNode->right = buildTree(preorder);
    return newNode;
}
void KthLevel(Node* root, int k){
    if(root==NULL){
        return;
    }
    if(k==1){
        cout<<root->data<<' ';
        return;
    }
    KthLevel(root->left, k-1);
    KthLevel(root->right,k-1 );
}


int main(void){
    vector<int> preorder={1,2,7,-1,-1,-1,3,4,-1,-1,5,9,-1,-1};
    Node* root=buildTree(preorder);
    KthLevel(root,2);
    KthLevel(root,3);

    return 0;
}

