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
    int countNodes(TreeNode* root) {
        if(root == NULL) return 0;
        return countNodes(root->left) + countNodes(root->right) + 1;
    }
};

int main() {
    Solution sol;
    
    // Constructing a simple tree:
    //      1
    //     / \
    //    2   3
    //   / \   \
    //  4   5   6
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2, new TreeNode(4), new TreeNode(5));
    root->right = new TreeNode(3, nullptr, new TreeNode(6));
    
    int totalNodes = sol.countNodes(root);
    
    // Output result
    cout << "Total number of nodes: " << totalNodes << endl;

    return 0;
}
