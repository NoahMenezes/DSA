#include<iostream>
#include<vector>
#include<queue>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data=val ;
        left=right=NULL;
    }
};
static int idx=-1;
Node* buildTree(const vector<int>& preorder) {
    idx++;

    // Handle out-of-bounds and null nodes
    if (idx >= preorder.size() || preorder[idx] == -1) {
        return NULL;
    }

    // Only one declaration and creation
    Node* root = new Node(preorder[idx]);

    root->left = buildTree(preorder);
    root->right = buildTree(preorder);

    return root;
}
void preOrder(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<"->";
    preOrder(root->left);
    preOrder(root->right);
}
// inorder;
void inorder(Node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void PostOrder(Node* root){
    if(root==NULL){
        return;
    }
    PostOrder(root->left);
    PostOrder(root->right);
    cout<<root->data<<" ";
}
void LevelOrder(Node* root) {
    if (root == NULL) return;

    queue<Node*> q;
    q.push(root);
    q.push(NULL); // level marker

    while (!q.empty()) {
        Node* curr = q.front();
        q.pop();

        if (curr == NULL) {
            cout << endl; // End of current level
            if (!q.empty()) {
                q.push(NULL); // Add marker for next level
            }
        } else {
            cout << curr->data << " ";
            if (curr->left != NULL) {
                q.push(curr->left);
            }
            if (curr->right != NULL) {
                q.push(curr->right);
            }
        }
    }
}
int main(){
    vector<int> preorder={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root=buildTree(preorder);
    cout<<root->data<<endl;
    cout<<root->left->data<<endl;
    cout<<root->right->data<<endl;


    cout<<endl;
    preOrder(root);
    cout<<endl;
    cout<<endl;
    inorder(root);
    cout<<endl;
    cout<<endl;
    PostOrder(root);
    cout<<endl;
    cout<<endl;
    LevelOrder(root);
    cout<<endl;
    cout<<endl;

    return 0;
}