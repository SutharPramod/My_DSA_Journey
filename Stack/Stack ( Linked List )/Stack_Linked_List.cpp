#include <iostream>
#include <list>
using namespace std;

class Stack{
    list<int> l;

    public:
    void push(int val){
        l.push_front(val);
    }
    
    int pop(){
        l.pop_front();
    }

    int top(){
        return l.front();
    }

    bool empty(){
        return l.size() == 0;
    }
};

int main(){
    Stack s;
    s.push(100);
    s.push(200);
    s.push(300);
    s.push(400);

    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}