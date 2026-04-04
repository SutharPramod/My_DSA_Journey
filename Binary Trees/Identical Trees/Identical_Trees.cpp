#include <iostream>

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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p == NULL || q == NULL) return p == q;

        return isSameTree(p->left , q->left) && isSameTree(p->right , q->right) && p->val == q->val;
    }
};

int main() {
    Solution sol;
    
    // Constructing Tree P: [1, 2, 3]
    TreeNode* p = new TreeNode(1, new TreeNode(2), new TreeNode(3));
    
    // Constructing Tree Q: [1, 2, 3]
    TreeNode* q = new TreeNode(1, new TreeNode(2), new TreeNode(3));
    
    bool result = sol.isSameTree(p, q);
    
    // Output result
    if (result) {
        cout << "The trees are identical." << endl;
    } else {
        cout << "The trees are NOT identical." << endl;
    }

    return 0;
}
