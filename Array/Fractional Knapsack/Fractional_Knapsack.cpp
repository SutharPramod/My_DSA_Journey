#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

class Solution {
  public:
    double fractionalKnapsack(vector<int>& val, vector<int>& wt, int capacity) {
        int n = val.size();
        vector<vector<double>> r(n , vector<double>(3));
        
        for(int i = 0 ; i < n ; i++){
            r[i][0] = (double)val[i]/wt[i];
            r[i][1] = val[i];
            r[i][2] = wt[i];
        }
        
        sort(r.begin(), r.end(), greater<>());
        
        double ans = 0;
        
        for(int i = 0 ; i < n ; i++){
            double ratio = r[i][0];
            double value = r[i][1];
            double weight = r[i][2];
            
            if(weight <= capacity){
                capacity -= weight;
                ans += value;
            }
            else{
                ans += (ratio * capacity);
                break;
            }
        }
        return ans;
    }
};

int main() {
    Solution sol;

    // Test Case 1
    vector<int> val1 = {60, 100, 120};
    vector<int> wt1 = {10, 20, 30};
    int capacity1 = 50;
    // Expected Output: 240.000000
    cout << fixed << setprecision(6);
    cout << "Test Case 1: " << sol.fractionalKnapsack(val1, wt1, capacity1) << " (Expected: 240.000000)" << endl;

    // Test Case 2
    vector<int> val2 = {500};
    vector<int> wt2 = {30};
    int capacity2 = 10;
    // Expected Output: 166.666667
    cout << "Test Case 2: " << sol.fractionalKnapsack(val2, wt2, capacity2) << " (Expected: 166.666667)" << endl;

    return 0;
}