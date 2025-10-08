#include <iostream>
#include <queue>
#include <algorithm>
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
    int widthOfBinaryTree(TreeNode* root) {
        if (!root) return 0;

        queue<pair<TreeNode*, unsigned long long>> q;
        q.push({root, 0});
        int maxWidth = 0;

        while (!q.empty()) {
            int levelSize = q.size();
            unsigned long long startIdx = q.front().second;
            unsigned long long endIdx = q.back().second;
            maxWidth = max(maxWidth, (int)(endIdx - startIdx + 1));

            for (int i = 0; i < levelSize; i++) {
                auto curr = q.front();
                q.pop();
                unsigned long long idx = curr.second - startIdx; // prevent overflow by offset

                if (curr.first->left) {
                    q.push({curr.first->left, 2 * idx});
                }
                if (curr.first->right) {
                    q.push({curr.first->right, 2 * idx + 1});
                }
            }
        }

        return maxWidth;
    }
};

// Example usage
int main() {
    /*
        Tree structure:
              1
             / \
            3   2
           /     \
          5       9
         /         \
        6           7

        Width of level 4 (nodes 6 and 7) = 8
    */

    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(3);
    root->right = new TreeNode(2);
    root->left->left = new TreeNode(5);
    root->right->right = new TreeNode(9);
    root->left->left->left = new TreeNode(6);
    root->right->right->right = new TreeNode(7);

    Solution sol;
    int width = sol.widthOfBinaryTree(root);

    cout << "Maximum width of the binary tree: " << width << endl;

    return 0;
}
