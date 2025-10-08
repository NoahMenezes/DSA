#include<iostream>
using namespace std;
class TreeNode{
    public:
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
class Solution{
    public:
    bool isIdentical(TreeNode* p, TreeNode* q){
        if(p==NULL||q==NULL)
        {
            return p==q;
        }
        return p->data == q->data && isIdentical(p->left, q->left) && isIdentical(p->right, q->right);
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot){
        if(root==NULL||subRoot==NULL){
            return root==subRoot;
        }
        if(root->data == subRoot->data && isIdentical(root, subRoot)){
            return true;
        }
        return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
    }
};

int main() {
    // Constructing the main tree
    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(4);
    root->right = new TreeNode(5);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(2);

    // Constructing the subtree
    TreeNode* subRoot = new TreeNode(4);
    subRoot->left = new TreeNode(1);
    subRoot->right = new TreeNode(2);

    Solution solution;
    if(solution.isSubtree(root, subRoot)) {
        cout << "subRoot is a subtree of root." << endl;
    } else {
        cout << "subRoot is NOT a subtree of root." << endl;
    }

    return 0;
}