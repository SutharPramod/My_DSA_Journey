#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool check(vector<int>& piles, int h ,int mid){
        long long cnt = 0;
        for(int i : piles){
           cnt += (i + mid - 1)/mid;
        }
        return cnt <= h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int ans;
        int s = 1 , e = piles[0];
        for(int i : piles){
            e = max (e , i);
        }

        while(s <= e){
            int m = s + (e - s)/2;

            if(check(piles, h , m)){
                e = m - 1;
                ans = m;
            }else{
                s = m + 1;
            }
        }
        return ans;
    }
};

int main() {
    Solution sol;

    // Test Case 1
    vector<int> piles1 = {3, 6, 7, 11};
    int h1 = 8;
    // Expected Output: 4
    cout << "Test Case 1: " << sol.minEatingSpeed(piles1, h1) << " (Expected: 4)" << endl;

    // Test Case 2
    vector<int> piles2 = {30, 11, 23, 4, 20};
    int h2 = 5;
    // Expected Output: 30
    cout << "Test Case 2: " << sol.minEatingSpeed(piles2, h2) << " (Expected: 30)" << endl;

    // Test Case 3
    vector<int> piles3 = {30, 11, 23, 4, 20};
    int h3 = 6;
    // Expected Output: 23
    cout << "Test Case 3: " << sol.minEatingSpeed(piles3, h3) << " (Expected: 23)" << endl;

    return 0;
}