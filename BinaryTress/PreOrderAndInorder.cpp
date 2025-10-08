#include <iostream>
#include <vector>
using namespace std;

class TreeNode {
public:
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) {
        data = val;
        left = right = NULL;
    }
};

class Solution {
public:
    int search(vector<int>& inorder, int left, int right, int val) {
        for (int i = left; i <= right; i++) {
            if (inorder[i] == val) {
                return i;
            }
        }
        return -1;
    }

    TreeNode* helper(vector<int>& preorder, vector<int>& inorder, int& preIdx, int left, int right) {
        if (left > right) {
            return NULL;
        }

        TreeNode* root = new TreeNode(preorder[preIdx]);
        int inIdx = search(inorder, left, right, preorder[preIdx]);
        preIdx++;

        root->left = helper(preorder, inorder, preIdx, left, inIdx - 1);
        root->right = helper(preorder, inorder, preIdx, inIdx + 1, right);

        return root;  // ✅ You were missing this return!
    }

    TreeNode* buildTree(vector<int> preorder, vector<int>& inorder) {
        int preIdx = 0;
        return helper(preorder, inorder, preIdx, 0, inorder.size() - 1);
    }

    // Optional: Print tree in inorder to verify
    void printInorder(TreeNode* root) {
        if (root == NULL) return;
        printInorder(root->left);
        cout << root->data << " ";
        printInorder(root->right);
    }
};

int main() {
    vector<int> preorder = {3, 9, 20, 15, 7};
    vector<int> inorder = {9, 3, 15, 20, 7};

    Solution sol;
    TreeNode* root = sol.buildTree(preorder, inorder);

    cout << "Inorder traversal of the constructed tree: ";
    sol.printInorder(root);  // Should match the original inorder if correct
    cout << endl;

    return 0;
}
