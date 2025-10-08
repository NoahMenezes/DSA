#include <iostream>
#include <vector>
#include <queue>
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

static int idx = -1;

Node* buildTree(const vector<int>& preorder) {
    idx++;

    if (idx >= preorder.size() || preorder[idx] == -1) {
        return NULL;
    }

    Node* root = new Node(preorder[idx]);
    root->left = buildTree(preorder);
    root->right = buildTree(preorder);

    return root;
}

// Correct function name
void preOrder(Node* root) {
    if (root == NULL) {
        return;
    }
    cout << root->data << " -> ";
    preOrder(root->left);
    preOrder(root->right);
}

int sumTree(Node* root) {
    if (root == NULL) {
        return 0;
    }
    int leftSum = sumTree(root->left);
    int rightSum = sumTree(root->right);
    root->data += leftSum + rightSum;
    return root->data;
}

int main() {
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};

    // Reset idx before building tree
    idx = -1;
    Node* root = buildTree(preorder);

    cout << "Before conversion: ";
    preOrder(root);
    cout << "NULL" << endl;

    sumTree(root);

    cout << "After conversion: ";
    preOrder(root);
    cout << "NULL" << endl;

    return 0;
}
