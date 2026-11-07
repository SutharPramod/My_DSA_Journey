#include <iostream>
#include <stack>
#include <vector>

using namespace std;

class Solution {
private:
    // Helper function to insert an element into a sorted stack
    void sortedInsert(stack<int>& s, int element) {
        // Base case: Either stack is empty or the top element is smaller than the element
        if (s.empty() || s.top() < element) {
            s.push(element);
            return;
        }

        // If top is greater, pop the top and recurse
        int topElement = s.top();
        s.pop();

        sortedInsert(s, element);

        // Put the popped element back
        s.push(topElement);
    }

public:
    void sortStack(stack<int>& s) {
        // Base case
        if (s.empty()) {
            return;
        }

        // Pop the top element
        int topElement = s.top();
        s.pop();

        // Sort the remaining stack
        sortStack(s);

        // Insert the popped element back into the sorted stack
        sortedInsert(s, topElement);
    }
};

// Helper function to print stack contents
void printStack(stack<int> s) {
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

int main() {
    Solution sol;

    // Test Case 1
    stack<int> s1;
    s1.push(34);
    s1.push(3);
    s1.push(31);
    s1.push(98);
    s1.push(92);
    s1.push(23);

    cout << "Original Stack 1 (Top to Bottom): ";
    stack<int> temp1 = s1;
    printStack(temp1);

    sol.sortStack(s1);

    cout << "Sorted Stack 1 (Top to Bottom - Max on Top): ";
    printStack(s1);

    // Test Case 2
    stack<int> s2;
    s2.push(5);
    s2.push(-2);
    s2.push(9);
    s2.push(-7);
    s2.push(3);

    cout << "\nOriginal Stack 2 (Top to Bottom): ";
    stack<int> temp2 = s2;
    printStack(temp2);

    sol.sortStack(s2);

    cout << "Sorted Stack 2 (Top to Bottom - Max on Top): ";
    printStack(s2);

    return 0;
}