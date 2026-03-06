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
    public :
    Node* head;
    Node* tail; 

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

};

void show(Node* head){
        Node* temp = head;
        while(temp != NULL){
            cout << temp->data << " -> ";
            temp = temp->next;  
        }
        cout<<"NULL"<<endl;
}

Node* merge(Node* head1,Node* head2){
    if(head1 == NULL || head2 == NULL){
        return head1 == NULL ? head2 : head1;
    }

    else if(head1->data <= head2->data){
        head1->next = merge(head1->next,head2);
        return head1;
    }

    else{
        head2->next = merge(head1,head2->next);
        return head2;
    }
}

int main(){
    List LL1;
    List LL2;

    LL1.push_front(5);
    LL1.push_front(4);
    LL1.push_front(3);
    LL1.push_front(2);
    LL1.push_front(1);

    LL2.push_front(9);
    LL2.push_front(8);
    LL2.push_front(5);
    LL2.push_front(3);
    LL2.push_front(2);

    show(LL1.head);
    show(LL2.head);
    Node* head = merge(LL1.head,LL2.head);

    show(head);
    return 0;
}