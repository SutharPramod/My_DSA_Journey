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
    int maxdiameter = 0;

    int height(TreeNode* root){
        if(root == NULL) return 0;

        int left = height(root->left);
        int right = height(root->right);

        maxdiameter = max(maxdiameter , left + right);

        return max(left , right) + 1;
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        height(root);
        return maxdiameter;
    }
};

int main() {
    Solution sol;
    
    // Constructing Tree:
    //       1
    //      / \
    //     2   3
    //    / \
    //   4   5
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2, new TreeNode(4), new TreeNode(5));
    root->right = new TreeNode(3);
    
    int result = sol.diameterOfBinaryTree(root);
    
    // Output result
    cout << "Diameter of the binary tree: " << result << endl;

    return 0;
}
