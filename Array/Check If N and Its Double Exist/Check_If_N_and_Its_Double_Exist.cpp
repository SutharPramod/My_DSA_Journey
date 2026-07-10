#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int n = arr.size();
        for(int i = 0 ;i < n ; i++){
            for(int j = 0 ; j < n ; j++){
                if(i != j && arr[i] == arr[j] * 2) return true;
            }
        }
        return false;
    }
};

int main() {
    Solution sol;

    // Test Case 1: 10 is the double of 5
    vector<int> arr1 = {10, 2, 5, 3};
    // Expected: True

    // Test Case 2: No element is the double of another
    vector<int> arr2 = {3, 1, 7, 11};
    // Expected: False

    cout << "Test Case 1: " << (sol.checkIfExist(arr1) ? "True" : "False") << " (Expected: True)" << endl;
    cout << "Test Case 2: " << (sol.checkIfExist(arr2) ? "True" : "False") << " (Expected: False)" << endl;

    return 0;
}