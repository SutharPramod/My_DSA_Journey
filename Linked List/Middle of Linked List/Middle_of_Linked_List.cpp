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

class List{
    Node* head;
    Node* tail; 

    public:

    List(){
        head = tail = NULL;
    }

    void push_front(int val){
        Node* newnode = new Node(val);
        if(head == NULL){
            head = tail = newnode;
            return;
        }
        else{
            newnode->next = head;
            head = newnode;
        }
    }

    void show(){
        Node* temp = head;
        while(temp != NULL){
            cout << temp->data << " -> ";
            temp = temp->next; 
        }
        cout << "NULL" << endl;
    }

    void middle(){
        Node* slow = head;
        Node* fast = head;

        if(head->next == NULL || head==NULL) slow = head;

        while (fast != NULL && fast->next != NULL)
        {
            fast = fast->next->next;
            slow = slow->next;
        }
        
        cout << "Middle of Linked List : " << slow->data << endl;
    }
};

int main(){
    List LL;
    LL.push_front(3);
    LL.push_front(4);
    LL.push_front(6);
    LL.push_front(7);
    LL.push_front(8);
    LL.push_front(9);

    LL.show();
    LL.middle();
    return 0;
}