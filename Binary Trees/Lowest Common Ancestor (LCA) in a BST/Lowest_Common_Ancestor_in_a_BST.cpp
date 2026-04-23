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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
       if(!root) return root;

        if(root->val > p->val && root->val > q->val)
            lowestCommonAncestor(root->left,p,q);
        else if(root->val < p->val && root->val < q->val)
            lowestCommonAncestor(root->left,p,q);
        else
            return root;
        
        return NULL;
    }
};

int main() {
    Solution sol;
    
    // Constructing Tree:
    //          6
    //        /   \
    //       2     8
    //      / \   / \
    //     0   4 7   9
    TreeNode* zero = new TreeNode(0);
    TreeNode* four = new TreeNode(4);
    TreeNode* seven = new TreeNode(7);
    TreeNode* nine = new TreeNode(9);
    TreeNode* two = new TreeNode(2, zero, four);
    TreeNode* eight = new TreeNode(8, seven, nine);
    TreeNode* root = new TreeNode(6, two, eight);
    
    TreeNode* p = two;   // Node 2
    TreeNode* q = eight; // Node 8
    
    TreeNode* result = sol.lowestCommonAncestor(root, p, q);
    
    // Output result
    if(result)
        cout << "LCA of " << p->val << " and " << q->val << " is: " << result->val << endl;

    return 0;
}
