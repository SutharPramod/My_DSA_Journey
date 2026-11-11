#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    int solve(int n, vector<int> &dp)
    {
        if (n == 0 || n == 2)
            return 1;

        if (dp[n] != -1)
            return dp[n];

        int total = 0;
        for (int j = 1; j < n; j += 2)
        {
            int left = solve(j - 1, dp);
            int right = solve(n - j - 1, dp);
            total += (left * right);
        }
        return dp[n] = total;
    }
    int numberOfWays(int n)
    {
        if (n % 2 == 1)
            return 0;
        vector<int> dp(n + 1, -1);
        return solve(n, dp);
    }
};

int main()
{
    Solution solution;

    // Test Case 1
    int num_people1 = 2;
    cout << "Input: " << num_people1 << endl;
    cout << "Output: " << solution.numberOfWays(num_people1) << endl;

    // Test Case 2
    int num_people2 = 30;
    cout << "Input: " << num_people2 << endl;
    cout << "Output: " << solution.numberOfWays(num_people2) << endl;

    return 0;
}