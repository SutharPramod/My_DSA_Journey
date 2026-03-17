#include <iostream>
#include <stack>
#include <vector>
using namespace std;

class MinStack {
public:
    int minval;
    stack<int> s;
    MinStack() {}
    
    void push(int val) {
        if(s.empty()){
            minval = val;
            s.push(val);
        }
        else if(val < minval){
            s.push(2*val - minval);
            minval = val;
        }
        else{
            s.push(val);
        }
    }
    
    void pop() {
        if(!s.empty()){
            if(s.top() < minval){
                minval = 2LL*minval - s.top();
            }
            s.pop();
        }
    }
    
    int top() {
        if(!s.empty()){
            if(s.top() < minval){
                return minval;
            }
            return s.top();
        }
    }
    
    int getMin() {
        return minval;
    }
};

int main() {
    MinStack* obj = new MinStack();
    
    cout << "Pushing: -2, 0, -3" << endl;
    obj->push(-2);
    obj->push(0);
    obj->push(-3);
    
    cout << "Current Min: " << obj->getMin() << endl; 
    
    obj->pop();
    cout << "Popped top element." << endl;
    
    cout << "Top element: " << obj->top() << endl;    
    cout << "Current Min: " << obj->getMin() << endl; 

    return 0;
}
