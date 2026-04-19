#include <iostream>
#include <climits>

using namespace std;

// Definition for a binary tree node.
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    bool isBST(TreeNode *root, TreeNode *min, TreeNode *max)
    {
        if (!root)
            return true;

        if (min && root->val <= min->val)
            return false;
        if (max && root->val >= max->val)
            return false;

        return isBST(root->left, min, root) && isBST(root->right, root, max);
    }
    bool isValidBST(TreeNode *root)
    {
        return isBST(root, NULL, NULL);
    }
};

int main()
{
    Solution sol;

    // Case 1: Valid BST
    //      2
    //     / \
    //    1   3
    TreeNode *validRoot = new TreeNode(2, new TreeNode(1), new TreeNode(3));

    // Case 2: Invalid BST
    //      5
    //     / \
    //    1   4
    //       / \
    //      3   6
    TreeNode *invalidRoot = new TreeNode(5, new TreeNode(1), new TreeNode(4, new TreeNode(3), new TreeNode(6)));

    cout << "Tree 1 is valid: " << (sol.isValidBST(validRoot) ? "True" : "False") << endl;
    cout << "Tree 2 is valid: " << (sol.isValidBST(invalidRoot) ? "True" : "False") << endl;

    return 0;
}
