#include <iostream>
using namespace std;

class Node{
    public :
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

class CircularLL{
    Node* head = NULL;
    Node* tail = NULL;

    public :
    //insert front
    void push_front(int val){
        Node* newnode = new Node(val);
        if(head == NULL){
            head = tail = newnode;
            tail->next = head;
        }
        else{
            newnode->next = head;
            head = newnode;
            tail->next = head;
        }
    }

    //insert back
    void push_back(int val){
        Node* newnode = new Node(val);
        if(head == NULL){
            head = tail = newnode;
            tail->next = head;
        }
        else{
            tail->next = newnode;
            tail = newnode;
            newnode->next = head;
        }
    }

    //print
    void display(){
        if(head == NULL) return;
        cout << head->data << "->";
        Node* temp = head->next;
        while(temp != tail->next){
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << head->data << endl;
    }

    //delete front
    void pop_front(){
        if(head == NULL) return;
        else{
            if(head->next == NULL){
                head = tail = NULL;
            }
            else{
                head = head->next;
                tail->next = head;
            }
        }
    }

    //delete back
    void pop_back(){
        
    }
};

int main(){

    CircularLL cll;

    cll.push_front(45);
    cll.push_front(42);
    cll.push_front(64);
    cll.push_back(37);
    cll.push_back(34);
    cll.push_back(23);
    cll.display();
    cll.pop_front();
    cll.display();

    return 0;
}
