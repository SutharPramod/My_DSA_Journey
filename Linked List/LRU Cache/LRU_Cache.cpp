#include <iostream>
#include <unordered_map>
using namespace std;

class Node {
public:
    int key, val;
    Node *next, *prev;
    Node(int k, int v) : key(k), val(v), next(NULL), prev(NULL) {}
};

class LRUCache {
public:
    Node *head = new Node(-1, -1);
    Node *tail = new Node(-1, -1);
    unordered_map<int, Node*> m; // Store Node pointers
    int limit;

    LRUCache(int capacity) {
        limit = capacity;
        head->next = tail;
        tail->prev = head;
    }

    void addnode(Node* newnode) {
        Node* temp = head->next;
        newnode->next = temp;
        newnode->prev = head;
        head->next = newnode;
        temp->prev = newnode;
    }

    void delnode(Node* oldnode) {
        Node* delprev = oldnode->prev;
        Node* delnext = oldnode->next;
        delprev->next = delnext;
        delnext->prev = delprev;
    }

    int get(int key) {
        if (m.find(key) == m.end()) return -1;
        
        Node* resNode = m[key];
        delnode(resNode);
        addnode(resNode);
        return resNode->val;
    }

    void put(int key, int value) {
        if (m.find(key) != m.end()) {
            Node* existing = m[key];
            m.erase(key);
            delnode(existing);
            delete existing;
        }

        if (m.size() == limit) {
            Node* lru = tail->prev;
            m.erase(lru->key);
            delnode(lru);
            delete lru;
        }

        Node* newNode = new Node(key, value);
        addnode(newNode);
        m[key] = newNode;
    }
};

void printCache(LRUCache& obj) {
    Node* curr = obj.head->next;
    cout << "Cache (MRU -> LRU): ";
    while (curr != obj.tail) {
        cout << "[" << curr->key << ":" << curr->val << "] ";
        curr = curr->next;
    }
    cout << endl;
}

int main() {
    LRUCache lRUCache(2);
    
    lRUCache.put(1, 1); 
    lRUCache.put(2, 2); 
    printCache(lRUCache);

    cout << "Get(1): " << lRUCache.get(1) << endl; 
    printCache(lRUCache);
    
    lRUCache.put(3, 3); // Evicts 2
    printCache(lRUCache);
    
    cout << "Get(2): " << lRUCache.get(2) << endl; 
    
    return 0;
}
