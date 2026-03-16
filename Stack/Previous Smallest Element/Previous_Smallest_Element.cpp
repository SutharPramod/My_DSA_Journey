#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class Solution {
  public:
    vector<int> previousSmallerElement(vector<int>& arr) {
        vector<int> ans(arr.size() , -1);
        stack<int> s;

        for(int i = 0 ; i < arr.size() ; i++){
            while(!s.empty() && s.top() >= arr[i]) s.pop();

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

    vector<int> arr1 = {1, 6, 4, 10, 2, 5};
    cout << "Input:  "; printVector(arr1);
    
    vector<int> res1 = sol.previousSmallerElement(arr1);
    cout << "Result: "; printVector(res1);

    vector<int> arr2 = {1, 3, 0, 2, 5};
    cout << "\nInput:  "; printVector(arr2);
    
    vector<int> res2 = sol.previousSmallerElement(arr2);
    cout << "Result: "; printVector(res2);

    return 0;
}
