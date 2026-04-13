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
    int toSumTree(TreeNode* node) {
       if(node == NULL) return 0;

       node->val += toSumTree(node->left) + toSumTree(node->right);

       return node->val;
    }
};

// Helper function to print tree (Inorder) for verification
void printInorder(TreeNode* node) {
    if (!node) return;
    printInorder(node->left);
    cout << node->val << " ";
    printInorder(node->right);
}

int main() {
    Solution sol;
    
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->right->left = new TreeNode(4);
    root->right->right = new TreeNode(5);
    
    sol.toSumTree(root);
    
    // Output result
    cout << "Inorder traversal of Sum Tree: ";
    printInorder(root);
    cout << endl;
    cout << "Sum : " << root->val;

    return 0;
}
