#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

class Solution
{
public:
    void dfs(int n, int p, int s, vector<int> &primes, int idx, vector<int> &curr, vector<vector<int>> &res)
    {
        if (curr.size() >= n || s <= 0 || idx >= primes.size())
        {
            if (curr.size() == n && s == 0)
            {
                res.push_back(curr);
            }
            return;
        }

        // take
        curr.push_back(primes[idx]);
        dfs(n, p, s - primes[idx], primes, idx + 1, curr, res);
        curr.pop_back();

        // do not take
        dfs(n, p, s, primes, idx + 1, curr, res);
    }
    vector<vector<int>> findPrimeCombinations(int N, int P, int S)
    {
        vector<bool> allprimes(S + 1, true);
        allprimes[0] = false;
        allprimes[1] = false;

        for (int p = 2; p * p <= S; p++)
        {
            if (allprimes[p])
            {
                for (int i = p * p; i <= S; i += p)
                {
                    allprimes[i] = false;
                }
            }
        }

        vector<int> primes;
        for (int i = P + 1; i < allprimes.size(); i++)
            if (allprimes[i])
                primes.push_back(i);

        vector<int> curr;
        vector<vector<int>> res;

        dfs(N, P, S, primes, 0, curr, res);

        return res;
    }
};

int main()
{
    Solution sol;

    // Test Case 1: N = 2, P = 7, S = 28
    int N1 = 2, P1 = 7, S1 = 28;
    vector<vector<int>> ans1 = sol.findPrimeCombinations(N1, P1, S1);
    cout << "Test Case 1 (N = " << N1 << ", P = " << P1 << ", S = " << S1 << "):\n";
    for (const auto &vec : ans1)
    {
        cout << "[ ";
        for (int val : vec)
            cout << val << " ";
        cout << "]\n";
    }

    // Test Case 2: N = 3, P = 2, S = 23
    int N2 = 3, P2 = 2, S2 = 23;
    vector<vector<int>> ans2 = sol.findPrimeCombinations(N2, P2, S2);
    cout << "Test Case 2 (N = " << N2 << ", P = " << P2 << ", S = " << S2 << "):\n";
    for (const auto &vec : ans2)
    {
        cout << "[ ";
        for (int val : vec)
            cout << val << " ";
        cout << "]\n";
    }

    int N3 = 4, P3 = 3, S3 = 54;
    vector<vector<int>> ans3 = sol.findPrimeCombinations(N3, P3, S3);
    cout << "Test Case 2 (N = " << N3 << ", P = " << P3 << ", S = " << S3 << "):\n";
    for (const auto &vec : ans3)
    {
        cout << "[ ";
        for (int val : vec)
            cout << val << " ";
        cout << "]\n";
    }

    return 0;
}