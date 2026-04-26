#include <iostream>
#include <vector>
#include <queue>

using namespace std;

// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}
    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}
    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};

class Solution {
public:
    Node* connect(Node* root) {
        if(root == NULL || root->left == NULL) return root;

        queue<Node*> q;
        Node* prev = NULL;

        q.push(root);
        q.push(NULL);

        while (q.size() > 0)
        {
            Node* curr = q.front();
            q.pop();
            if(curr == NULL){
                if(q.size() > 0){
                    break;
                }
                q.push(NULL);
            }
            else{
                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
                if(prev) prev->next = curr;
            }
            prev = curr;
        }
        
        return root;
    }
};

/**
 * Helper function to print levels using next pointers.
 */
void printLevelsWithNext(Node* root) {
    Node* levelStart = root;
    while (levelStart) {
        Node* curr = levelStart;
        while (curr) {
            cout << curr->val << " -> ";
            curr = curr->next;
        }
        cout << "NULL" << endl;
        levelStart = levelStart->left;
    }
}

int main() {
    Solution sol;

    // Constructing a perfect binary tree: [1,2,3,4,5,6,7]
    Node* root = new Node(1);
    root->left = new Node(2, new Node(4), new Node(5), NULL);
    root->right = new Node(3, new Node(6), new Node(7), NULL);

    Node* connectedRoot = sol.connect(root);
    
    cout << "Tree Levels connected by next pointers:" << endl;
    printLevelsWithNext(connectedRoot);

    return 0;
}
