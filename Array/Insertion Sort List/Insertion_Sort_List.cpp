#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Definition for singly-linked list node.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* insertionSortList(ListNode* head) {
        vector<int> arr;

        ListNode* temp = head;
        while(temp != NULL){
            arr.push_back(temp->val);
            temp = temp->next;
        }
        sort(arr.begin(),arr.end());

        temp = head;
        int idx = 0 ;
        while(temp != NULL){
            temp->val = arr[idx];
            temp = temp->next;
            idx++;
        }
        return head;
    }
};

// Helper functions for testing
void printList(ListNode* head) {
    while (head) {
        cout << head->val << (head->next ? " -> " : "");
        head = head->next;
    }
    cout << endl;
}

int main() {
    Solution sol;

    // Test Case 1: 4 -> 2 -> 1 -> 3
    ListNode* head1 = new ListNode(4, new ListNode(2, new ListNode(1, new ListNode(3))));
    cout << "Original List 1: ";
    printList(head1);
    head1 = sol.insertionSortList(head1);
    cout << "Sorted List 1:   ";
    printList(head1);
    cout << "(Expected: 1 -> 2 -> 3 -> 4)\n" << endl;

    // Test Case 2: -1 -> 5 -> 3 -> 4 -> 0
    ListNode* head2 = new ListNode(-1, new ListNode(5, new ListNode(3, new ListNode(4, new ListNode(0)))));
    cout << "Original List 2: ";
    printList(head2);
    head2 = sol.insertionSortList(head2);
    cout << "Sorted List 2:   ";
    printList(head2);
    cout << "(Expected: -1 -> 0 -> 3 -> 4 -> 5)" << endl;

    return 0;
}