#include <iostream>
#include <vector>
#include <unordered_map>

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
    int i = 0;
    unordered_map<int,int> m;
    
    TreeNode* helper(vector<int>& preorder,int left,int right){
        if(left > right) return NULL;

        int val = preorder[i++];
        TreeNode* root = new TreeNode(val);

        int inidx = m[val];

        root->left = helper(preorder,left,inidx-1);
        root->right = helper(preorder,inidx+1,right);

        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        for(int i = 0 ; i < inorder.size() ; i++){
            m[inorder[i]] = i;
        }

        return helper(preorder , 0 , preorder.size() - 1);

    }
};

// Helper function to print tree (Inorder) for verification
void printInorder(TreeNode* node) {
    if (!node) return;
    printInorder(node->left);
    cout << node->val << " ";
    printInorder(node->right);
}

int main() {
    Solution sol;
    
    // Test Case
    vector<int> preorder = {3, 9, 20, 15, 7};
    vector<int> inorder = {9, 3, 15, 20, 7};
    
    TreeNode* root = sol.buildTree(preorder, inorder);
    
    // Output result
    cout << "Inorder traversal of constructed tree: ";
    printInorder(root);
    cout << endl;

    return 0;
}
