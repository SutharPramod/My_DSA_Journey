#include <iostream>
#include <algorithm>
#include <climits>

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
    int min_dist = INT_MAX;
    int prev_val = -1;
    int minDiffInBST(TreeNode* root) {

        if(!root) return -1;

        if(root->left) {
            int leftmin = minDiffInBST(root->left);
            min_dist = min(min_dist , leftmin);
        }

        if(prev_val != -1){
            min_dist = min(min_dist ,root->val - prev_val);
        }
        prev_val = root->val;

        if(root->right) {
            int rightmin = minDiffInBST(root->right);
            min_dist = min(min_dist , rightmin);
        }
        
        return min_dist;
    }
};

int main() {
    Solution sol;
    
    // Constructing Tree:
    //      4
    //     / \
    //    2   6
    //   / \
    //  1   3
    TreeNode* root = new TreeNode(4, 
                        new TreeNode(2, new TreeNode(1), new TreeNode(3)), 
                        new TreeNode(6));
    
    int result = sol.minDiffInBST(root);
    
    // Output result
    cout << "Minimum Distance: " << result << endl;

    return 0;
}
