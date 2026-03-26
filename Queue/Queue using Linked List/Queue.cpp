#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* next;

    Node(int val){
        this->val = val;
        next = NULL;
    }

};

class Queue{
    public:
    Node* head;
    Node* tail;

    Queue(){
        head = tail = NULL;
    }

    void push(int val){
        Node* newnode = new Node(val);
        if(head == NULL) {
            head = tail = newnode;
        }
        else{
            tail->next = newnode;
            tail = newnode;
        }
    }

    void pop(){
        if(head == NULL) cout << "No Data in Queue.\n";
        else{
            head = head->next;
        }
    }

    int front(){
        if(head == NULL) return -1;
        else return head->val;
    }

    bool empty(){
        return head==NULL;
    }
};

int main(){
    Queue q1;


    q1.push(1);
    q1.push(1);
    q1.push(2);
    q1.pop();
    q1.pop();
    q1.pop();
    cout << "Front : " << q1.front() << endl;
    cout << (q1.empty() ? "Queue is Empty" : "Queue is not Empty") << endl;

    return 0;
}