#include <iostream>
#include <vector>
#include <string>

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
    void helper(TreeNode* root,vector<string> &ans, string path){
        if(!root->left && !root->right){
            ans.push_back(path);
            return;
        }  

        if(root->left){
            helper(root->left,ans,path + "->" + to_string(root->left->val));
        }

        if(root->right){
            helper(root->right,ans,path + "->" + to_string(root->right->val));
        }
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        helper(root , ans , to_string(root->val));
        return ans;
    }
};

int main() {
    Solution sol;
    
    // Constructing Tree:
    //       1
    //     /   \
    //    2     3
    //     \
    //      5
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->right = new TreeNode(5);
    
    vector<string> paths = sol.binaryTreePaths(root);
    
    // Output result
    cout << "Root-to-Leaf Paths:" << endl;
    for (const string& p : paths) {
        cout << p << endl;
    }

    return 0;
}
