#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool check(int m , vector<int>& weights , int days){
        int cnt = 0;
        int sum = 0;
        for(int i : weights){
            sum += i;
            if(sum > m){
                sum = i;
                cnt++;
            }
        }
        return days >= cnt + 1;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        int s , e ;
        s = e = 0 ;
        for(int i : weights){
            e += i;
            s = max(s,i);
        }
        int ans;
        while(s <= e){
            int m = s + (e-s)/2;
            if(check(m , weights , days)){
                e = m - 1;
                ans = m;
            }
            else
                s = m + 1;
        }
        return ans;
    }
};

int main() {
    Solution sol;

    // Test Case 1
    vector<int> weights1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int days1 = 5;
    // Expected: 15
    cout << "Test Case 1: " << sol.shipWithinDays(weights1, days1) << " (Expected: 15)" << endl;

    // Test Case 2
    vector<int> weights2 = {3, 2, 2, 4, 1, 4};
    int days2 = 3;
    // Expected: 6
    cout << "Test Case 2: " << sol.shipWithinDays(weights2, days2) << " (Expected: 6)" << endl;

    return 0;
}