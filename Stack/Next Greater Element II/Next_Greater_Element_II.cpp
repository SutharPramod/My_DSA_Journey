#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class Solution {
  public:
    vector<int> nextGreaterElementII(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n,-1);
        stack<int> s;

        for(int i = n*2 - 1 ; i >= 0 ; i--){
            while (!s.empty() && s.top() <= arr[i%n]) s.pop();

            if(!s.empty()) ans[i%n] = s.top();

            s.push(arr[i%n]);
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
    
    vector<int> res1 = sol.nextGreaterElementII(arr1);
    cout << "Result: "; printVector(res1);

    vector<int> arr2 = {6, 8, 0, 1, 3};
    cout << "\nInput:  "; printVector(arr2);
    
    vector<int> res2 = sol.nextGreaterElementII(arr2);
    cout << "Result: "; printVector(res2);

    return 0;
}
