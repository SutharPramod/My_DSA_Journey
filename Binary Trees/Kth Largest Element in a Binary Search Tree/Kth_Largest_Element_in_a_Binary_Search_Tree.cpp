#include <iostream>
#include <vector>
#include <stack>

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
    int result = -1 , count = 0;

    void helper(TreeNode* root, int k){
        if(!root) return;

        helper(root->right,k);

        count++;
        if(count == k) result = root->val;

        helper(root->left,k);
    }

    int kthLargest(TreeNode* root, int k) {
        helper(root,k);
        return result;
    }
};

int main() {
    Solution sol;
    
    // Constructing Tree:
    //      3
    //     / \
    //    1   4
    //     \
    //      2
    TreeNode* root = new TreeNode(3, 
                        new TreeNode(1, nullptr, new TreeNode(2)), 
                        new TreeNode(4));
    
    int k = 1;
    int result = sol.kthLargest(root, k);
    
    // Output result
    cout << k << "st Largest Element: " << result << endl;

    return 0;
}
