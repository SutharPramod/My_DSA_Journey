#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

// Definition for a binary tree node.
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution
{
public:
    int widthOfBinaryTree(TreeNode *root)
    {
        int maxw = 0;
        queue<pair<TreeNode *, unsigned long long>> q;

        if (root)
            q.push({root, 0});

        while (q.size() > 0)
        {
            unsigned long long st = q.front().second;
            unsigned long long end = q.back().second;
            int currsize = q.size();
            maxw = max(maxw, (int)(end - st + 1));
            for (int i = 0; i < currsize; i++)
            {
                TreeNode *currnode = q.front().first;
                unsigned long long idx = q.front().second;
                q.pop();
                if (currnode->left)
                {
                    q.push({currnode->left, 2 * idx + 1});
                }
                if (currnode->right)
                {
                    q.push({currnode->right, 2 * idx + 2});
                }
            }
        }
        return maxw;
    }
};

int main()
{
    Solution sol;

    // Constructing Tree:
    //          1
    //        /   \
    //       3     2
    //      / \     \  
    //     5   3     9
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(3);
    root->right = new TreeNode(2);
    root->left->left = new TreeNode(5);
    root->left->right = new TreeNode(3);
    root->right->right = new TreeNode(9);

    int result = sol.widthOfBinaryTree(root);

    // Output result
    cout << "Maximum Width of Binary Tree: " << result << endl;

    return 0;
}
