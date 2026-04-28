#include <iostream>
#include <vector>

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

    TreeNode* inorderPredecessor(TreeNode* root, TreeNode* p) {
        TreeNode* pred = NULL;

        while(root){
            if(root == p){
                if(root->left){
                    TreeNode* temp = root->left;
                    while(temp->right) temp = temp->right;
                    pred = temp;
                }
                break;
            }
            else if(root->val > p->val){
                root = root->left;
            }
            else{
                pred = root;
                root = root->right;
            }
        }
        return pred;
    }

    TreeNode* inorderSuccessor(TreeNode* root, TreeNode* p) {
        TreeNode* succ = NULL;

        while(root){
            if(root == p){
                if(root->right){
                    TreeNode* temp = root->right;
                    while(temp->left) temp = temp->left;
                    succ = temp;
                }
                break;
            }
            else if(root->val > p->val){
                succ = root;
                root = root->left;
            }
            else{
                root = root->right;
            }
        }
        return succ;
    }
};

int main() {
    Solution sol;

    /* BST Structure:
                20
               /  \
              10   30
             /  \
            5    15
                /
               12
    */
    TreeNode* root = new TreeNode(20);
    TreeNode* n10 = new TreeNode(10);
    TreeNode* n30 = new TreeNode(30);
    TreeNode* n5 = new TreeNode(5);
    TreeNode* n15 = new TreeNode(15);
    TreeNode* n12 = new TreeNode(12);

    root->left = n10;
    root->right = n30;
    n10->left = n5;
    n10->right = n15;
    n15->left = n12;

    // Test Case: Find Predecessor and Successor of Node(15)
    // Expected Predecessor: 12
    // Expected Successor: 20
    TreeNode* target = n15;

    TreeNode* pred = sol.inorderPredecessor(root, target);
    TreeNode* succ = sol.inorderSuccessor(root, target);

    cout << "Target Node: " << target->val << endl;
    
    if (pred) cout << "Inorder Predecessor: " << pred->val << endl;
    else cout << "Inorder Predecessor: NULL" << endl;

    if (succ) cout << "Inorder Successor: " << succ->val << endl;
    else cout << "Inorder Successor: NULL" << endl;

    return 0;
}