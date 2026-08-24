#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        int res = 0 , p = players.size() , t = trainers.size() , i = 0 , j = 0;
        sort(players.begin(),players.end());
        sort(trainers.begin(),trainers.end());
        while(i < p && j < t){
            if(trainers[j] >= players[i]){
                res++;
                j++;
                i++;
            }
            else{
                j++;
            }
        }
        return res;
    }
};

int main() {
    Solution sol;

    // Test Case 1
    vector<int> players1 = {4, 7, 9};
    vector<int> trainers1 = {8, 2, 5, 8};
    // Expected Output: 2 (Match 4 with 5, 7 with 8)
    cout << "Test Case 1: " << sol.matchPlayersAndTrainers(players1, trainers1) << " (Expected: 2)" << endl;

    // Test Case 2
    vector<int> players2 = {1, 1, 1};
    vector<int> trainers2 = {10};
    // Expected Output: 1
    cout << "Test Case 2: " << sol.matchPlayersAndTrainers(players2, trainers2) << " (Expected: 1)" << endl;

    return 0;
}