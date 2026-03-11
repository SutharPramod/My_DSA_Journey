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
    ListNode* swapPairs(ListNode* head) {
        
        ListNode* prev = NULL;
        ListNode* first = head;
        ListNode* second = head->next;

        head = second;

        while (first != NULL && second != NULL)
        {
            ListNode* Next = second->next;
            second->next = first;
            first->next = Next;
            if(prev != NULL) prev->next = second;

            if(Next == NULL || Next->next == NULL) return head;

            prev = first;
            first = Next;
            second = Next->next;
        }

        return head;
    }
};

void printList(ListNode* head) {
    ListNode* temp = head;
    while (temp) {
        std::cout << temp->val;
        if (temp->next) std::cout << " -> ";
        temp = temp->next;
    }
    std::cout << " -> NULL" << std::endl;
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
    
    std::vector<int> nodes = {1, 2, 3, 4};
    ListNode* head = createList(nodes);
    
    std::cout << "Original List: ";
    printList(head);
    
    Solution sol;
    head = sol.swapPairs(head);
    
    std::cout << "Swapped Pairs: ";
    printList(head);
    
    return 0;
}
