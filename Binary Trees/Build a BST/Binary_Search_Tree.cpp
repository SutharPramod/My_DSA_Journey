#include<iostream>
#include<vector>

using namespace std;

class Node{
    public:
    int val;
    Node* left;
    Node*right;

    Node(int val){
        this->val = val;
        left = NULL;
        right = NULL;
    }
};

Node* insert(Node *root, int val){
    if(root == NULL){
        return new Node(val);
    }

    if(val < root->val){
        root->left = insert(root->left,val);
    }

    if(val > root->val){
        root->right = insert(root->right,val);
    }

    return root;
}

bool search(Node* root,int target){
    if(root == NULL) return false;
    if(target == root->val) return true;
    if(target > root->val) return search(root->right,target);
    if(target < root->val) return search(root->left,target);
    return false;
}

Node* getIS(Node* root){
    while(root && root->left)
        root = root->left;
    return root;
}

Node* delNode(Node* root,int key){
    if(root == NULL) return NULL;

    if(root->val > key) return delNode(root->left,key);
    else if(root->val < key) return delNode(root->right,key);
    else{
        if(!root->left){
            Node* temp = root->right;
            delete root;
            return temp;
        }
        else if(!root->right){
            Node* temp = root->left;
            delete root;
            return temp;
        }
        else{
            Node* IS = getIS(root->right);
            root->val = IS->val;
            root->right = delNode(root->right,IS->val);
        }
    }
    return root;
}

Node* BuildBST(vector<int> arr){
    Node* root = NULL;
    if(arr.size() > 0){
        for(int i : arr){
            root = insert(root,i);
        }
    }
    return root;
}

void inorder(Node* root){
    if(root == NULL) return;

    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}

int main(){

    Node* root = BuildBST({3,2,1,5,6,4});
    inorder(root);
    cout << endl;
    cout << (search(root,0) ? "Found" : "Not Found");
    return 0 ;
}