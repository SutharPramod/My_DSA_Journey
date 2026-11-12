#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int> result;
        result.push_back(0);
        
        for (int i = 0; i < n; ++i) {
            int add = 1 << i;
            int currentSize = result.size();
            for (int j = currentSize - 1; j >= 0; --j) {
                result.push_back(result[j] + add);
            }
        }
        
        return result;
    }
};

int main() {
    Solution solution;
    
    // Test Case 1
    int n1 = 2;
    vector<int> result1 = solution.grayCode(n1);
    cout << "Gray Code for n = 2: ";
    for (int val : result1) {
        cout << val << " ";
    }
    cout << endl;
    
    // Test Case 2
    int n2 = 3;
    vector<int> result2 = solution.grayCode(n2);
    cout << "Gray Code for n = 3: ";
    for (int val : result2) {
        cout << val << " ";
    }
    cout << endl;
    
    return 0;
}