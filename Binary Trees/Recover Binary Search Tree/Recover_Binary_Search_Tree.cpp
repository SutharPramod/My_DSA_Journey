#include <iostream>
#include <algorithm>
#include <vector>

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
    TreeNode* prev = NULL;
    TreeNode* first = NULL;
    TreeNode* second = NULL;
    void inorder(TreeNode* root){
        if(!root) return;

        inorder(root->left);

        if(prev && prev->val > root->val){
            if(!first){
                first = prev;
            }
            second = root;
        }
        prev = root;

        inorder(root->right);
    }
    void recoverTree(TreeNode* root) {
        inorder(root);

        int temp = first->val;
        first->val = second->val;
        second->val = temp; 
    }
};

void printInorder(TreeNode* root) {
    if (!root) return;
    printInorder(root->left);
    cout << root->val << " ";
    printInorder(root->right);
}

int main() {
    Solution sol;

    // Example Test Case: [1,3,null,null,2]
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(3);
    root->left->right = new TreeNode(2);

    cout << "Before Recovery (Inorder): ";
    printInorder(root);
    cout << endl;

    sol.recoverTree(root);

    cout << "After Recovery (Inorder):  ";
    printInorder(root);
    cout << endl;

    return 0;
}
