#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include<unordered_map>

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
   vector<int> bottomView(TreeNode* root) {
        vector<int> result;
        queue<pair<TreeNode*,int>> q;
        unordered_map<int,int> m;

        if(root != NULL) q.push({root,0});

        while(q.size() > 0){
            TreeNode* currnode = q.front().first;
            int currhd = q.front().second;

            q.pop();

            m[currhd] = currnode->val;

            if(currnode->left != NULL) q.push({currnode->left,currhd-1});
            if(currnode->right != NULL) q.push({currnode->right,currhd+1});
        }
        for(auto i : m) result.push_back(i.second);
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
    
    vector<int> result = sol.bottomView(root);
    
    // Output result
    cout << "Bottom View: ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
