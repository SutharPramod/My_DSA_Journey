#include <iostream>

using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p == NULL || q == NULL) return p == q;

        return isSameTree(p->left , q->left) && isSameTree(p->right , q->right) && p->val == q->val;
    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root == nullptr || subRoot == nullptr) return root == subRoot;
        if(root->val == subRoot->val && isSameTree(root,subRoot)) return true;

        return isSubtree(root->left , subRoot) || isSubtree(root->right , subRoot);
    }
};

int main() {
    Solution sol;
    
    // Main Tree (root):
    //      3
    //     / \
    //    4   5
    //   / \
    //  1   2
    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(4, new TreeNode(1), new TreeNode(2));
    root->right = new TreeNode(5);
    
    // Subtree (subRoot):
    //    4
    //   / \
    //  1   2
    TreeNode* subRoot = new TreeNode(4, new TreeNode(1), new TreeNode(2));
    
    bool result = sol.isSubtree(root, subRoot);
    
    // Output result
    if (result) {
        cout << "The tree IS a subtree." << endl;
    } else {
        cout << "The tree is NOT a subtree." << endl;
    }

    return 0;
}
