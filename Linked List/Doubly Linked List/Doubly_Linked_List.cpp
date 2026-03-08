#include <iostream>

using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int val){
        data = val;
        prev = NULL;
        next = NULL;
    }
};

class DoublyLL{
    Node* head = NULL;
    Node* tail = NULL;

    public:
    //push front
    void push_front(int val){
        Node* newnode = new Node(val);
        if(head == NULL){
            head = tail = newnode;
        }
        else{
            newnode->next = head;
            head->prev = newnode;
            head = newnode;
        }
    }
    //push back
    void push_back(int val){
        Node* newnode = new Node(val);
        if(head == NULL){
            head = tail = newnode;
        }
        else{
            Node* temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newnode;
            newnode->prev = temp;
            tail = newnode;
        }
    }
    //pop front
    void pop_front(){
        if(head == NULL){
            cout << "List is empty.";
            return;
        }
        else{
            if(head -> next == NULL){
                head = NULL;
                tail = NULL;
            }
            else{
                head = head->next;
                head->prev = NULL;
            }
        }
    }

    //pop back
    void pop_back(){
        if(head == NULL){
            cout << "List is empty.";
            return;
        }
        else{
            if(head->next == NULL){
                head = NULL;
                tail = NULL;
                return;
            }
            Node* temp = head;
            while (temp -> next -> next != NULL)
            {
                temp = temp -> next;
            }
            temp -> next = NULL;
            tail = temp;
        }
    }

    void print(){
        if(head == NULL){
            cout << "List is empty.";
            return;
        }
        Node* temp = head;
        while(temp != NULL){
            cout << temp->data << " <-> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
        cout << "Head : "  << head -> data << endl;
        cout << "Tail : "  << tail -> data << endl;
    }
};

int main(){
    DoublyLL dll;
    dll.push_front(3);
    dll.print();
    dll.pop_back();
    dll.print();
    return 0;
}