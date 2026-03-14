#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class Solution {
  public:
    vector<int> calculateSpan(vector<int>& arr) {
        vector<int> ans(arr.size());
        stack<int> s;

        for(int i = 0 ; i < arr.size() ; i++){
            while(!s.empty() && arr[s.top()] <= arr[i]) s.pop();

            if(s.size() == 0) ans[i] = i + 1;
            else ans[i] = i - s.top();

            s.push(i);
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

    vector<int> arr1 = {100, 80, 60, 70, 60, 75, 85};
    cout << "Prices: "; printVector(arr1);
    
    vector<int> res1 = sol.calculateSpan(arr1);
    cout << "Spans:  "; printVector(res1);

    vector<int> arr2 = {10, 4, 5, 90, 120, 80};
    cout << "\nPrices: "; printVector(arr2);
    
    vector<int> res2 = sol.calculateSpan(arr2);
    cout << "Spans:  "; printVector(res2);

    return 0;
}
