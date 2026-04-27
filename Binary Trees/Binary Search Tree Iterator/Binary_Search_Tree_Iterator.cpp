#include <iostream>
#include <stack>
#include <vector>

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

class BSTIterator {
public:

    stack<TreeNode*> s;

    void store(TreeNode* root){
        while(root){
            s.push(root);
            root = root->left;
        }
    }
    
    BSTIterator(TreeNode* root) {
        store(root);
    }
    
    
    int next() {
        if(s.size() == 0) return -1;
        auto ans = s.top();
        s.pop();
        if(ans->right) store(ans->right);
        return ans->val;
    }
    
    bool hasNext() {
        return s.size() > 0;
    }
};

int main() {
    // Constructing the BST:
    //      7
    //     / \
    //    3   15
    //       /  \
    //      9    20
    TreeNode* root = new TreeNode(7);
    root->left = new TreeNode(3);
    root->right = new TreeNode(15);
    root->right->left = new TreeNode(9);
    root->right->right = new TreeNode(20);

    cout << "Initializing BSTIterator..." << endl;
    BSTIterator* iterator = new BSTIterator(root);

    // Test sequence
    cout << "next(): " << iterator->next() << " (Expected: 3)" << endl;
    cout << "next(): " << iterator->next() << " (Expected: 7)" << endl;
    cout << "hasNext(): " << (iterator->hasNext() ? "true" : "false") << " (Expected: true)" << endl;
    cout << "next(): " << iterator->next() << " (Expected: 9)" << endl;
    cout << "hasNext(): " << (iterator->hasNext() ? "true" : "false") << " (Expected: true)" << endl;
    cout << "next(): " << iterator->next() << " (Expected: 15)" << endl;
    cout << "hasNext(): " << (iterator->hasNext() ? "true" : "false") << " (Expected: true)" << endl;
    cout << "next(): " << iterator->next() << " (Expected: 20)" << endl;
    cout << "hasNext(): " << (iterator->hasNext() ? "true" : "false") << " (Expected: false)" << endl;

    delete iterator;
    return 0;
}