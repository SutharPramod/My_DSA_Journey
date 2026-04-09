#include <iostream>
#include <vector>
#include <queue>

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
    void get(TreeNode* root, int k,vector<int> &result){
        if(root == NULL) return;
        if(k == 1) {
            result.push_back(root->val);
            return;
        }

        get(root->left , k - 1 , result);
        get(root->right , k - 1 , result);
    }
    
    vector<int> getKthLevel(TreeNode* root, int k) {
        vector<int> result;

        //Level Order
        queue<pair<TreeNode*,int>> q;

        if(root != NULL) q.push({root,1});

        while (q.size() > 0)
        {
            TreeNode* curr = q.front().first;
            int currk = q.front().second;
            q.pop();
            if(currk == k) result.push_back(curr->val);

            if(curr->left != NULL) q.push({curr->left,currk+1});
            if(curr->right != NULL) q.push({curr->right,currk+1});
        }

        //Recursion
        //get(root,k,result);

        return result;
    }
};

int main() {
    Solution sol;
    
    // Constructing Tree:
    //       1
    //     /   \
    //    2     3
    //   / \   / \
    //  4   5 6   7
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);
    
    int k = 3;
    vector<int> result = sol.getKthLevel(root, k);
    
    // Output result
    cout << "Nodes at level " << k << ": ";
    if (result.empty()) {
        cout << "None";
    } else {
        for (int val : result) {
            cout << val << " ";
        }
    }
    cout << endl;

    return 0;
}
