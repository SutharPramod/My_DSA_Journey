#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

bool detect_cycle(Node* head){

    if(head == NULL || head->next == NULL) return false;
    Node* slow = head;
    Node* fast = head;

    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast) return true;
    }

    return slow == fast;
}

void remove_cycle(Node* head){
    Node* slow = head;
    Node* fast = head;

    do{
        slow = slow->next;
        fast = fast->next->next;
    }while(slow != fast);

    slow = head;
    Node* prev = NULL;

    while (slow != fast)
    {
        prev = fast;
        slow = slow->next;
        fast = fast->next;
    }
    
    prev->next = NULL;
}

int main(){
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    head->next->next->next->next->next = head->next->next->next;

    if(detect_cycle(head)) cout << "There is cycle in Linked List." << endl;
    else cout << "There is no cycle in Linked List." << endl;

    remove_cycle(head);

    if(detect_cycle(head)) cout << "There is cycle in Linked List." << endl;
    else cout << "There is no cycle in Linked List." << endl;;

    return 0;
}