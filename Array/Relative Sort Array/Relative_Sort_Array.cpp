#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        int freq[1001] = {0};
        int mv = 0;
        for(int x : arr1){
            freq[x]++;
            mv = max(mv,x);
        }
        vector<int> res;
        for(int x : arr2){
            while(freq[x] > 0){
                res.push_back(x);
                freq[x]--;
            }
        }

        for(int i = 0 ; i <= mv ; i++){
            while(freq[i] > 0){
                res.push_back(i);
                freq[i]--;
            }
        }

        return res;
    }
};

int main() {
    Solution sol;

    // Test Case 1
    vector<int> arr1_1 = {2, 3, 1, 3, 2, 4, 6, 7, 9, 2, 19};
    vector<int> arr2_1 = {2, 1, 4, 3, 9, 6};
    auto res1 = sol.relativeSortArray(arr1_1, arr2_1);
    
    cout << "Test Case 1 Output: [ ";
    for (int x : res1) cout << x << " ";
    cout << "]\n(Expected: [2, 2, 2, 1, 4, 3, 3, 9, 6, 7, 19])" << endl;

    // Test Case 2
    vector<int> arr1_2 = {28, 6, 22, 8, 44, 17};
    vector<int> arr2_2 = {22, 28, 8, 6};
    auto res2 = sol.relativeSortArray(arr1_2, arr2_2);
    
    cout << "\nTest Case 2 Output: [ ";
    for (int x : res2) cout << x << " ";
    cout << "]\n(Expected: [22, 28, 8, 6, 17, 44])" << endl;

    return 0;
}