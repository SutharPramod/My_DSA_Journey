#include <iostream>
#include <queue>
using namespace std;

class MyStack {
public:
    
    queue<int> q1;
    queue<int> q2;
    
    MyStack() {
        
    }
    
    void push(int x) {
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        q1.push(x);
        while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }
    }
    
    int pop() {
        int val = q1.front();
        q1.pop();
        return val;
    }
    
    int top() {
        
        return q1.front();
    }
    
    bool empty() {
        
        return q1.empty();
    }
};

int main() {
    MyStack st;

    cout << "Pushing: 1, 2, 3" << endl;
    st.push(1);
    st.push(2);
    st.push(3);

    cout << "Top element: " << st.top() << " (Expected: 3)" << endl;
    
    cout << "Popping: " << st.pop() << " (Expected: 3)" << endl;
    
    cout << "Top element now: " << st.top() << " (Expected: 2)" << endl;
    
    cout << "Is stack empty? " << (st.empty() ? "Yes" : "No") << " (Expected: No)" << endl;

    return 0;
}
