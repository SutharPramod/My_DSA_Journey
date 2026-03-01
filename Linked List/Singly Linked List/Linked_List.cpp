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

    //head - null push front
    void push_front(int val){
        Node* newnode = new Node(val);
        if(head == NULL){
            head = tail = newnode;
            return;
        }
        else{
            newnode->next = head; //*(newnode).next = head;
            head = newnode;
        }
    }
    //head - not null push back
    void push_back(int val){
        Node* newnode = new Node(val);
        if(head == NULL){
            head = tail = newnode;
            return;
        }
        else{
            tail->next = newnode; //*(tail).next = newnode;
            tail = newnode;
        }
    }
    //pop front
    void pop_front(){
        if(head == NULL){
            return;
        }
        Node* temp = head;
        head = head->next;
        temp = NULL;
        delete temp;
    }
    //pop back
    void pop_back(){
        if(head == NULL) return;

        Node* temp = head;

        while(temp->next != tail) temp = temp->next;

        temp->next = NULL;
        delete tail;
        tail = temp; 
    }

    void show(){
        Node* temp = head;
        while(temp != NULL){
            cout << temp->data << " ";
            temp = temp->next; 
        }
    }

    //insert at middle
    void insert(int val , int pos){
        if(pos < 0) return;
        if(pos == 0) push_front(val);
        if(pos > 0){
            Node* newnode = new Node(val);

            Node* temp = head;

            for(int i = 0 ; i < pos - 1 ; i++){
                temp = temp->next;
            }
            newnode->next = temp->next;
            temp->next = newnode;
        }
    }
};

int main(){
    List LL;
    LL.push_front(3);
    LL.push_front(4);
    LL.push_front(6);
    LL.insert(5,2);

    LL.show();
    return 0;
}