#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <climits>

using namespace std;

class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<vector<pair<int,int>>> adj(n);

        for(auto& flight : flights){
            adj[flight[0]].push_back({flight[1],flight[2]});
        }

        vector<int> dist(n,INT_MAX);
        queue<pair<int,int>> q;
        q.push({src , 0});

        dist[src] = 0;

        int stops = 0;

        while(q.size() > 0 && stops <= k){
            int sz = q.size();

            for(int i = 0 ; i < sz ; i++){
                auto t = q.front();
                int u = t.first;
                int cost = t.second;
                q.pop();

                for(auto& neigh : adj[u]){
                    int v = neigh.first;
                    int price = neigh.second;

                    if(dist[v] > cost + price){
                        dist[v] = cost + price;
                        q.push({v,dist[v]});
                    }
                }
            }
            stops++;
        }

        return dist[dst] == INT_MAX ? -1 : dist[dst];
    }
};

int main() {
    Solution sol;

    // Test Case 1: Standard graph where direct path is expensive, 
    // but path with 1 stop is cheaper.
    // 0 -> 1 (cost 100), 1 -> 2 (cost 100), 0 -> 2 (cost 500)
    int n1 = 3;
    vector<vector<int>> flights1 = {{0, 1, 100}, {1, 2, 100}, {0, 2, 500}};
    int src1 = 0, dst1 = 2, k1 = 1;
    // Expected: 200 (0 -> 1 -> 2 uses exactly 1 stop)

    // Test Case 2: Same graph but 0 stops allowed
    int k2 = 0;
    // Expected: 500 (Must take direct flight 0 -> 2)

    cout << "Test Case 1 (k=1): " << sol.findCheapestPrice(n1, flights1, src1, dst1, k1) << " (Expected: 200)" << endl;
    cout << "Test Case 2 (k=0): " << sol.findCheapestPrice(n1, flights1, src1, dst1, k2) << " (Expected: 500)" << endl;

    return 0;
}