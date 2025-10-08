#include <iostream>
using namespace std;

// TreeNode class
class TreeNode {
public:
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

// Solution class with LCA function
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (root == NULL) {
            return NULL;
        }

        if (root->data == p->data || root->data == q->data) {
            return root;
        }

        TreeNode* leftLCA = lowestCommonAncestor(root->left, p, q);
        TreeNode* rightLCA = lowestCommonAncestor(root->right, p, q);

        if (leftLCA && rightLCA) {
            return root;
        } else if (leftLCA != NULL) {
            return leftLCA;
        } else {
            return rightLCA;
        }
    }
};

// Main function to test
int main() {
    /*
            3
           / \
          5   1
         / \ / \
        6  2 0  8
          / \
         7   4
    */

    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(5);
    root->right = new TreeNode(1);
    root->left->left = new TreeNode(6);
    root->left->right = new TreeNode(2);
    root->right->left = new TreeNode(0);
    root->right->right = new TreeNode(8);
    root->left->right->left = new TreeNode(7);
    root->left->right->right = new TreeNode(4);

    Solution sol;

    TreeNode* p = root->left;              // Node with value 5
    TreeNode* q = root->left->right->right; // Node with value 4

    TreeNode* lca = sol.lowestCommonAncestor(root, p, q);

    if (lca != NULL) {
        cout << "Lowest Common Ancestor of " << p->data << " and " << q->data << " is: " << lca->data << endl;
    } else {
        cout << "Lowest Common Ancestor not found." << endl;
    }

    return 0;
}
