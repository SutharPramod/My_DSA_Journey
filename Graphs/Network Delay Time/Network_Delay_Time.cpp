#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include<climits>

using namespace std;

class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        priority_queue< pair<int,int> , vector<pair<int , int>> , greater<pair<int,int>>> pq;
        int maxt = 0;
        vector<int> dist(n,INT_MAX);
        pq.push({0,k});
        dist[k - 1] = 0;

        while(pq.size() > 0){
            int u = pq.top().second;
            int d = pq.top().first;

            pq.pop();

            for(auto i = 0 ; i < times.size() ; i++){
                if(times[i][0] == u){
                    if(d + times[i][2] < dist[times[i][1] - 1]){
                        dist[times[i][1] - 1] = d + times[i][2];
                        pq.push({ dist[times[i][1] - 1] , times[i][1]});
                    }
                }
            }
        }
        

        for(int i = 0 ; i < n ; i++){
            if(dist[i] == INT_MAX) return -1;
            maxt = max(maxt,dist[i]);
        }
        return maxt;
    }
};

int main() {
    Solution sol;

    // Test Case 1: Standard graph
    // (1->2, weight 1), (2->3, weight 1), (3->4, weight 1)
    // Start at node 2, n=4
    vector<vector<int>> times1 = {{2, 1, 1}, {2, 3, 1}, {3, 4, 1}};
    int n1 = 4, k1 = 2;

    // Test Case 2: Disconnected node
    // (1->2, weight 1)
    // Start at node 1, n=2, but node 2 is unreachable from start? 
    // Actually, if k=2, node 1 is unreachable.
    vector<vector<int>> times2 = {{1, 2, 1}};
    int n2 = 2, k2 = 2;

    cout << "Test Case 1: " << sol.networkDelayTime(times1, n1, k1) << " (Expected: 2)" << endl;
    cout << "Test Case 2: " << sol.networkDelayTime(times2, n2, k2) << " (Expected: -1)" << endl;

    return 0;
}