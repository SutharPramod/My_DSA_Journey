#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int ts , cs , sn;
        ts = cs = sn = 0;

        for(int i = 0 ; i < gas.size() ; i++){
            ts += gas[i] - cost[i];
            cs += gas[i] - cost[i];

            if(cs < 0){
                cs = 0;
                sn = i + 1;
            }
        }
        if(ts < 0) return -1;
        return sn;
    }
};

int main() {
    Solution sol;
    
    vector<int> gas = {1, 2, 3, 4, 5};
    vector<int> cost = {3, 4, 5, 1, 2};
    
    int startIndex = sol.canCompleteCircuit(gas, cost);
    
    if (startIndex != -1) {
        cout << "Start at station index: " << startIndex << endl;
    } else {
        cout << "No solution exists." << endl;
    }

    return 0;
}
