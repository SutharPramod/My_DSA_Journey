#include <iostream>
#include <vector>

class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;

    Node(int _val) : val(_val), prev(nullptr), next(nullptr), child(nullptr) {}
};

class Solution {
public:
    Node* flatten(Node* head) {
        
        if(head == NULL) return head;

        Node* curr = head;
        while(curr != NULL){
            if(curr->child != NULL){
                Node* Next = curr->next;
                curr->next = flatten(curr->child);
                curr->next->prev = curr;
                curr->child = NULL;

                while(curr->next != NULL)
                    curr = curr->next;

                if(Next != NULL){
                    Next->prev = curr;
                    curr->next = Next;
                }
            }
            curr = curr->next;
        }
        return head;
    }
};

void printList(Node* head) {
    Node* temp = head;
    while (temp) {
        std::cout << temp->val;
        if (temp->next) std::cout << " <-> ";
        temp = temp->next;
    }
    std::cout << std::endl;
}

int main() {

    Node* head = new Node(1);
    head->next = new Node(2); head->next->prev = head;
    head->next->next = new Node(3); head->next->next->prev = head->next;
    
    Node* childHead = new Node(7);
    childHead->next = new Node(8); childHead->next->prev = childHead;
    
    head->next->child = childHead;

    Solution sol;
    head = sol.flatten(head);

    std::cout << "Flattened List Result:" << std::endl;
    printList(head);

    return 0;
}
