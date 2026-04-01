#include <iostream>
#include <algorithm>

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
    int maxDepth(TreeNode* root) {
        if(root == NULL) return 0;
        return max( maxDepth(root->left) , maxDepth(root->right)) + 1;
    }
};

int main() {
    Solution sol;
    
    // Manually constructing a simple tree:
    //      3
    //     / \
    //    9  20
    //       / \
    //      15  7
    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20, new TreeNode(15), new TreeNode(7));
    
    int height = sol.maxDepth(root);
    
    cout << "Height of the binary tree: " << height << endl;
    
    return 0;
}
