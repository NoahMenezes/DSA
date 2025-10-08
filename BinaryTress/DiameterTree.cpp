#include<iostream>
#include<vector>
#include<queue>
#include<map>
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

// Print top view of binary tree
void topView(Node* root) {
    if (root == NULL) return;

    queue<pair<Node*, int>> q; // Pair of node and its horizontal distance (HD)
    map<int, int> m;           // Map to store first node at each HD

    q.push({root, 0});

    while (!q.empty()) {
        auto p = q.front();
        q.pop();

        Node* curr = p.first;
        int hd = p.second;

        if (m.find(hd) == m.end()) {
            m[hd] = curr->data; // First node at this horizontal distance
        }

        if (curr->left) {
            q.push({curr->left, hd - 1});
        }
        if (curr->right) {
            q.push({curr->right, hd + 1});
        }
    }

    // Print top view from leftmost HD to rightmost
    for (auto it : m) {
        cout << it.second << " ";
    }
    cout << endl;
}

int main() {
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};

    // Reset static index before building tree
    idx = -1;
    Node* root = buildTree(preorder);

    cout << "Top view of the binary tree: ";
    topView(root);

    return 0;
}
