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

    //reverse
    void reverse(){
        if(head == NULL || head->next == NULL) return;
        Node* prev = NULL;
        Node* curr = head;
        Node* Next = NULL;
        while(curr != NULL){
            Node* Next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = Next;
        }
        head = prev;
    }
};

int main(){
    List LL;
    LL.push_front(3);
    LL.push_front(4);
    LL.push_front(6);
    LL.push_front(7);
    LL.push_front(9);
    LL.push_front(2);
    LL.show();
    LL.reverse();
    LL.show();
    return 0;
}