#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
static int idx = -1;

Node *create(vector<int> &preorder)
{
    idx++;

    // base case
    if (preorder[idx] == -1)
        return NULL;

    Node *root = new Node(preorder[idx]);
    root->left = create(preorder);
    root->right = create(preorder);

    return root;
}

void preorder(Node *root)
{
    if (root == NULL)
        return;

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(Node *root)
{
    if (root == NULL)
        return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void postorder(Node *root)
{
    if (root == NULL)
        return;

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

void levelorder(Node *root)
{
    queue<Node *> q;
    if (root != NULL)
    {
        q.push(root);
        //for new line 
        q.push(NULL);
    }

    while (q.size() > 0)
    {
        Node *curr = q.front();
        q.pop();

        // for new line for every level

        if (curr == NULL)
        {
            if (!q.empty())
            {
                cout << endl;
                q.push(NULL);
                continue;
            }
            else
            {
                break;
            }
        }

        cout << curr->data << " ";

        if (curr->left != NULL)
        {
            q.push(curr->left);
        }

        if (curr->right != NULL)
        {
            q.push(curr->right);
        }
    }
}

int main()
{
    vector<int> order = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};

    Node *root = create(order);
    cout << "Preorder : " << endl;
    preorder(root);
    cout << endl;

    cout << "Inorder : " << endl;
    inorder(root);
    cout << endl;

    cout << "Postorder : " << endl;
    postorder(root);
    cout << endl;

    cout << "Levelorder : " << endl;
    levelorder(root);
    cout << endl;

    return 0;
}