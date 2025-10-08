#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Definition for a binary tree node
class TreeNode {
public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) {
        val = x;
        left = right = NULL;
    }
};

class Solution {
public:
    void allPaths(TreeNode* root, string path, vector<string>& ans) {
        if (root->left == NULL && root->right == NULL) {
            ans.push_back(path);
            return;
        }

        if (root->left) {
            allPaths(root->left, path + "->" + to_string(root->left->val), ans);
        }

        if (root->right) {
            allPaths(root->right, path + "->" + to_string(root->right->val), ans);
        }
    }

    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        if (root == NULL) return ans;
        
        string path = to_string(root->val);
        allPaths(root, path, ans);
        return ans;
    }
};

// Example usage
int main() {
    /*
            1
           / \
          2   3
           \
            5
    */
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->right = new TreeNode(5);

    Solution sol;
    vector<string> paths = sol.binaryTreePaths(root);

    cout << "All root-to-leaf paths:" << endl;
    for (string path : paths) {
        cout << path << endl;
    }

    return 0;
}
