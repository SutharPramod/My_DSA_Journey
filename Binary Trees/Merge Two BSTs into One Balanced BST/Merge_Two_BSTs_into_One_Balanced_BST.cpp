#include <iostream>
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
    TreeNode* BuildBST(vector<int> &arr , int st , int end){
        if(st > end) return nullptr;

        int mid = st + (end-st)/2;

        TreeNode* root = new TreeNode(arr[mid]);

        root->left = BuildBST(arr,st,mid-1);
        root->right = BuildBST(arr,mid+1,end);

        return root;
    }

    void inorder(TreeNode* root, vector<int> &arr){
        if(!root) return;

        inorder(root->left,arr);
        arr.push_back(root->val);
        inorder(root->right,arr);
    }

    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        vector<int> arr1;
        vector<int> arr2;
        vector<int> temp;

        inorder(root1,arr1);
        inorder(root2,arr2);

        int i = 0 , j = 0;
        while(i < arr1.size() && j < arr2.size()){
            if(arr1[i] < arr2[j]) temp.push_back(arr1[i++]);
            else temp.push_back(arr2[j++]);
        }

        while(i < arr1.size()) temp.push_back(arr1[i++]);
        while(j < arr2.size()) temp.push_back(arr2[j++]);

        return BuildBST(temp,0,temp.size()-1);
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

    // Constructing test BSTs
    TreeNode* root1 = new TreeNode(2, new TreeNode(1), new TreeNode(3));
    TreeNode* root2 = new TreeNode(5, new TreeNode(4), new TreeNode(6));

    TreeNode* mergedRoot = sol.mergeTrees(root1, root2);

    cout << "Inorder of Merged BST: ";
    printInorder(mergedRoot);
    cout << endl;

    return 0;
}
