#include <iostream>

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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root == NULL) return NULL;
        if(root == p || root == q) return root;

        TreeNode* left = lowestCommonAncestor(root->left , p , q);
        TreeNode* right = lowestCommonAncestor(root->right , p , q);

        if(left && right){ return root;}
        else if(left != NULL) {return left;}
        else {return right;}

        return NULL;
    }
};

int main() {
    Solution sol;
    
    // Constructing Tree:
    //        3
    //      /   \
    //     5     1
    //    / \   / \
    //   6   2 0   8
    //      / \
    //     7   4
    TreeNode* root = new TreeNode(3);
    TreeNode* n5 = new TreeNode(5);
    TreeNode* n1 = new TreeNode(1);
    root->left = n5;
    root->right = n1;
    
    n5->left = new TreeNode(6);
    TreeNode* n2 = new TreeNode(2);
    n5->right = n2;
    n2->left = new TreeNode(7);
    TreeNode* n4 = new TreeNode(4);
    n2->right = n4;
    
    n1->left = new TreeNode(0);
    n1->right = new TreeNode(8);
    
    // Test Case: LCA of 5 and 4
    TreeNode* lca = sol.lowestCommonAncestor(root, n5, n4);
    
    // Output result
    if (lca) {
        cout << "LCA of " << n5->val << " and " << n4->val << " is: " << lca->val << endl;
    } else {
        cout << "LCA not found." << endl;
    }

    return 0;
}
