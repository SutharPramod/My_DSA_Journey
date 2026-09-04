#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <iomanip>

using namespace std;

class Solution {
public:
    double average(vector<int>& salary) {
        double sum = 0;
        int n = salary.size() - 2;
        if(n == 1){
            sort(salary.begin(),salary.end());
            return salary[1];
        }
        int mins = salary[0] , maxs = salary[0];
        for(int x : salary){
            mins = min(mins , x);
            maxs = max(maxs , x);
            sum += x;
        }

        return (sum - mins - maxs)/n;
    }
};

int main() {
    Solution sol;

    // Test Case 1
    vector<int> salary1 = {4000, 3000, 1000, 2000};
    cout << fixed << setprecision(5);
    cout << "Test Case 1: " << sol.average(salary1) << " (Expected: 2500.00000)" << endl;

    // Test Case 2
    vector<int> salary2 = {1000, 2000, 3000};
    cout << "Test Case 2: " << sol.average(salary2) << " (Expected: 2000.00000)" << endl;

    return 0;
}