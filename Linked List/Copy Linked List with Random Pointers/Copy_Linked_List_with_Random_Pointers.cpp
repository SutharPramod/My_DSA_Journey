#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = nullptr;
        random = nullptr;
    }
};

class Solution {
public:
    Node* copyRandomList(Node* head) {

        if(head == NULL) return head;

        unordered_map<Node*,Node*> m;

        Node* oldtemp = head->next;
        Node* newhead = new Node(head->val);
        Node* newTemp = newhead;
        m[head] = newhead;

        while (oldtemp != NULL)
        {
            Node* copyNode = new Node(oldtemp->val);
            newTemp->next = copyNode;
            m[oldtemp] = copyNode;
            newTemp = newTemp->next;
            oldtemp = oldtemp->next;
        }

        oldtemp = head;
        newTemp = newhead;
        while (oldtemp != NULL)
        {
            newTemp->random = m[oldtemp->random];
            oldtemp = oldtemp->next;
            newTemp = newTemp->next; 
        }
        
        return newhead;
    }
};

Node* buildList(const vector<pair<int, int>>& data) {
    if (data.empty()) return nullptr;
    
    vector<Node*> nodes;
    for (auto& p : data) {
        nodes.push_back(new Node(p.first));
    }
    
    for (int i = 0; i < (int)data.size(); ++i) {
        if (i < (int)data.size() - 1) nodes[i]->next = nodes[i+1];
        if (data[i].second != -1) nodes[i]->random = nodes[data[i].second];
    }
    
    return nodes[0];
}

void printList(Node* head) {
    unordered_map<Node*, int> nodeToIndex;
    int idx = 0;
    Node* curr = head;
    while (curr) {
        nodeToIndex[curr] = idx++;
        curr = curr->next;
    }

    curr = head;
    while (curr) {
        cout << "[" << curr->val << ", ";
        if (curr->random) cout << nodeToIndex[curr->random];
        else cout << "null";
        cout << "] -> ";
        curr = curr->next;
    }
    cout << "NULL" << endl;
}

int main() {
    
    vector<pair<int, int>> testData = {{7, -1}, {13, 0}, {11, 4}, {10, 2}, {1, 0}};
    
    Node* head = buildList(testData);
    
    cout << "Original List: ";
    printList(head);
    
    Solution sol;
    Node* copiedHead = sol.copyRandomList(head);
    
    cout << "Copied List:   ";
    printList(copiedHead);
    
    return 0;
}
