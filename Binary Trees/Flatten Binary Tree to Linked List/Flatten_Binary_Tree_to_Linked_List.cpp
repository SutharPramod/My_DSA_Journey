#include <iostream>
#include <vector>

using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    TreeNode* nr = NULL;
    void flatten(TreeNode* root) {
        if(!root) return;

        flatten(root->right);
        flatten(root->left);

        root->left = NULL;
        root->right - nr;
        nr = root;
    }
};

// Helper function to print flattened tree
void printFlattened(TreeNode* root) {
    while (root) {
        cout << root->val << " -> ";
        if (root->left) cout << "(ERR: Left not NULL) ";
        root = root->right;
    }
    cout << "NULL" << endl;
}

int main() {
    Solution sol;
    
    // Constructing Tree:
    //       1
    //     /   \
    //    2     3
    //   / \   / \
    //  4   5 6   7
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);
    
    sol.flatten(root);
    
    // Output result
    cout << "Flattened Tree: ";
    printFlattened(root);

    return 0;
}
