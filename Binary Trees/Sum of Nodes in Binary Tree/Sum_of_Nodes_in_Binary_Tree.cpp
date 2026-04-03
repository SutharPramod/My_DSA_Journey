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
    int sumOfNodes(TreeNode* root) {
        if(root == NULL) return 0;;
        return sumOfNodes(root->left) + sumOfNodes(root->right) + root->val;
    }
};

int main() {
    Solution sol;
    
    // Constructing a simple tree:
    //        10
    //       /  \
    //      5   -3
    //     / \    \
    //    3   2    11
    TreeNode* root = new TreeNode(10);
    root->left = new TreeNode(5, new TreeNode(3), new TreeNode(2));
    root->right = new TreeNode(-3, nullptr, new TreeNode(11));
    
    int totalSum = sol.sumOfNodes(root);
    
    // Output result
    cout << "Sum of all node values: " << totalSum << endl;

    return 0;
}
