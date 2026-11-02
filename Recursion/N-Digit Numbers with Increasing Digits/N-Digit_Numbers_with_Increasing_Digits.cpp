#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
  public:
    void dfs(int n , int curr , int last , vector<int> &res){
        if(n == 0){
            res.push_back(curr);
            return;
        }
        
        for(int i = last + 1 ; i <= 9 ; i++){
            dfs(n - 1 , curr * 10 + i , i , res);
        }
    }
    vector<int> increasingNumbers(int n) {
        if(n > 9) return {};
        vector<int> res;
        if(n == 1) res.push_back(0);
        for(int i = 1 ; i <= 9 ; i++){
            dfs(n - 1 , i , i , res);
        }
        
        return res;
    }
};

int main() {
    Solution sol;
    
    // Test Case 1
    int n1 = 1;
    vector<int> ans1 = sol.increasingNumbers(n1);
    cout << "N = " << n1 << " Output: ";
    for (int num : ans1) {
        cout << num << " ";
    }
    cout << endl;
    
    // Test Case 2
    int n2 = 2;
    vector<int> ans2 = sol.increasingNumbers(n2);
    cout << "N = " << n2 << " Output: ";
    for (int num : ans2) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}