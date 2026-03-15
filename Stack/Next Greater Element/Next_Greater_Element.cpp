#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class Solution {
  public:
    vector<int> nextGreaterElement(vector<int>& arr) {
        vector<int> ans(arr.size(),-1);
        stack<int> s;

        for(int i = arr.size() - 1 ; i >= 0 ; i--){
            while (!s.empty() && s.top() <= arr[i]) s.pop();

            if(!s.empty()) ans[i] = s.top();

            s.push(arr[i]);
        }
        return ans;
    }
};

void printVector(const vector<int>& res) {
    for (int x : res) {
        cout << x << " ";
    }
    cout << endl;
}

int main() {
    Solution sol;

    vector<int> arr1 = {1, 3, 2, 4};
    cout << "Input:  "; printVector(arr1);
    
    vector<int> res1 = sol.nextGreaterElement(arr1);
    cout << "Result: "; printVector(res1);

    vector<int> arr2 = {6, 8, 0, 1, 3};
    cout << "\nInput:  "; printVector(arr2);
    
    vector<int> res2 = sol.nextGreaterElement(arr2);
    cout << "Result: "; printVector(res2);

    return 0;
}
