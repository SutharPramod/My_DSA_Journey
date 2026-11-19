#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    long long MOD = 1e9 + 7;
    long long power(long long base, long long exp)
    {
        long long res = 1;
        base %= MOD;
        while (exp > 0)
        {
            if (exp % 2 == 1)
                res = (res * base) % MOD;
            base = (base * base) % MOD;
            exp /= 2;
        }
        return res;
    };

    long long modInverse(long long n)
    {
        return power(n, MOD - 2);
    };
    int makeStringSorted(string s)
    {
        int n = s.length();

        vector<long long> fact(n + 1, 1);
        vector<long long> invFact(n + 1, 1);

        for (int i = 1; i <= n; i++)
        {
            fact[i] = (fact[i - 1] * i) % MOD;
        }
        invFact[n] = modInverse(fact[n]);
        for (int i = n - 1; i >= 0; i--)
        {
            invFact[i] = (invFact[i + 1] * (i + 1)) % MOD;
        }

        long long ans = 0;
        vector<int> count(26, 0);
        for (char c : s)
        {
            count[c - 'a']++;
        }

        for (int i = 0; i < n; i++)
        {
            int smallerCount = 0;
            for (int j = 0; j < s[i] - 'a'; j++)
            {
                smallerCount += count[j];
            }

            if (smallerCount > 0)
            {
                long long permutations = fact[n - 1 - i];
                for (int j = 0; j < 26; j++)
                {
                    permutations = (permutations * invFact[count[j]]) % MOD;
                }
                ans = (ans + smallerCount * permutations) % MOD;
            }

            count[s[i] - 'a']--;
        }

        return ans;
    }
};

int main()
{
    Solution sol;

    string s1 = "cba";
    cout << "Input: " << s1 << endl;
    cout << "Output: " << sol.makeStringSorted(s1) << endl;

    string s2 = "aabaa";
    cout << "Input: " << s2 << endl;
    cout << "Output: " << sol.makeStringSorted(s2) << endl;

    return 0;
}