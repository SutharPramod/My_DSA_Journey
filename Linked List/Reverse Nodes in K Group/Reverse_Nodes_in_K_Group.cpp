#include <iostream>
#include <vector>

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        int cnt = 0 ;
        ListNode* temp = head;

        while (cnt < k)
        {
            if(temp == NULL) return head;
            temp = temp->next;
            cnt++;
        }

        ListNode* prevNode = reverseKGroup(temp,k);

        temp = head;
        cnt = 0;

        while (cnt < k)
        {
            ListNode* Next = temp->next;
            temp->next = prevNode;
            prevNode = temp;
            temp = Next;
            cnt++;
        }
        
        return prevNode;
    }
};

void printList(ListNode* head) {
    ListNode* temp = head;
    while (temp) {
        std::cout << temp->val;
        if (temp->next) std::cout << " -> ";
        temp = temp->next;
    }
    std::cout << std::endl;
}

ListNode* createList(const std::vector<int>& nums) {
    if (nums.empty()) return nullptr;
    ListNode* head = new ListNode(nums[0]);
    ListNode* curr = head;
    for (size_t i = 1; i < nums.size(); ++i) {
        curr->next = new ListNode(nums[i]);
        curr = curr->next;
    }
    return head;
}

int main() {
    
    std::vector<int> nodes = {1, 2, 3, 4, 5};
    int k = 2;
    
    ListNode* head = createList(nodes);
    
    std::cout << "Original List: ";
    printList(head);
    
    Solution sol;
    head = sol.reverseKGroup(head, k);
    
    std::cout << "Reversed in k=" << k << " groups: ";
    printList(head);
    
    return 0;
}
