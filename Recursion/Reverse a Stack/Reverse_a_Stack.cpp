#include <iostream>
#include <stack>
#include <vector>

using namespace std;

class Solution {
private:
    // Helper function to insert an element at the bottom of a stack
    void insertAtBottom(stack<int>& st, int x) {
        if (st.empty()) {
            st.push(x);
            return;
        }
        
        int topElement = st.top();
        st.pop();
        
        insertAtBottom(st, x);
        
        st.push(topElement);
    }

public:
    // Function to reverse the stack
    void reverseStack(stack<int>& st) {
        if (st.empty()) {
            return;
        }
        
        int topElement = st.top();
        st.pop();
        
        reverseStack(st);
        
        insertAtBottom(st, topElement);
    }
};

// Helper function to print stack for testing
void printStack(stack<int> st) {
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

int main() {
    Solution sol;

    // Test Case 1
    stack<int> st1;
    st1.push(1);
    st1.push(2);
    st1.push(3);
    st1.push(4);
    st1.push(5);

    cout << "Test Case 1 - Original Stack (Top to Bottom): 5 4 3 2 1" << endl;
    sol.reverseStack(st1);
    cout << "Test Case 1 - Reversed Stack (Top to Bottom): ";
    printStack(st1);

    // Test Case 2
    stack<int> st2;
    st2.push(10);
    st2.push(20);
    st2.push(30);

    cout << "\nTest Case 2 - Original Stack (Top to Bottom): 30 20 10" << endl;
    sol.reverseStack(st2);
    cout << "Test Case 2 - Reversed Stack (Top to Bottom): ";
    printStack(st2);

    return 0;
}