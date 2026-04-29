#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

/**
 * Definition for a binary tree node.
 */
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
    class Info{
        public:
        int mn , mx , sum;

        Info(int mn , int mx , int sum){
            this->mn = mn;
            this->mx = mx;
            this->sum = sum;
        }
    };

    int maxsum = 0;

    Info helper(TreeNode* root){
        if(!root) return Info(INT_MAX,INT_MIN,0);

        Info l = helper(root->left);
        Info r = helper(root->right);
        if(root->val < r.mn && root->val > l.mx) {  //valid bst
            int currsum = l.sum + r.sum + root->val;
            maxsum = max(maxsum,currsum);

            return Info(min(root->val,l.mn) , max(root->val,r.mx) , currsum);
        }

        return Info(INT_MIN,INT_MAX,max(l.sum , r.sum));
    }

    int maxSumBST(TreeNode* root) {
        helper(root);
        return maxsum;
    }
};

int main() {
    Solution sol;

    // Example Test Case: [4,3,null,1,2]
    TreeNode* root = new TreeNode(4);
    root->left = new TreeNode(3);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(2);

    int result = sol.maxSumBST(root);
    
    cout << "Maximum Sum BST: " << result << endl;

    return 0;
}
