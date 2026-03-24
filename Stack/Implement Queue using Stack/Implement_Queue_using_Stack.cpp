#include <iostream>
#include <stack>
using namespace std;

class MyQueue {
public:
    
    stack<int> s1, s2;

    MyQueue() {
        
    }
    
    void push(int x) {
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(x);
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
    }
    
    int pop() {
        int val = s1.top();
        s1.pop();
        return val;
    }
    
    int peek() {
        return s1.top();
    }
    
    bool empty() {
        
        return s1.empty();
    }
};

int main() {
    MyQueue q;

    cout << "Pushing: 10, 20, 30" << endl;
    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Front element: " << q.peek() << " (Expected: 10)" << endl;
    
    cout << "Popping: " << q.pop() << " (Expected: 10)" << endl;
    
    cout << "Front element now: " << q.peek() << " (Expected: 20)" << endl;
    
    cout << "Is queue empty? " << (q.empty() ? "Yes" : "No") << " (Expected: No)" << endl;

    return 0;
}
