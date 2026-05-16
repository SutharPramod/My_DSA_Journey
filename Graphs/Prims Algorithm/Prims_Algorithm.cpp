#include<iostream>
#include<vector>
#include<queue>

using namespace std;

class Edge{
    public:
    int v , wt;

    Edge(int wt , int v){
        this->v = v;
        this->wt = wt;
    }
};

int PrimsAlgo(int V, vector<vector<Edge>> &g){
    int MinCost = 0;
    priority_queue<pair<int,int> , vector<pair<int,int>> , greater<pair<int,int>>> pq;
    vector<bool> vis(V,false);

    pq.push({0,0});

    while(pq.size() > 0){
        int u = pq.top().second;
        int wt = pq.top().first;
        pq.pop();

        if(!vis[u]){
            vis[u] = true;
            MinCost += wt;

            for(Edge e : g[u]){
                if(!vis[e.v])
                pq.push({e.wt,e.v});
            }
        }
    }
    return MinCost;
}

int main(){
    int V = 4;
    vector<vector<Edge>> g(V);

    g[0].push_back({10,1});
    g[0].push_back({15,2});
    g[0].push_back({30,3});

    g[1].push_back({10,0});
    g[1].push_back({40,3});

    g[2].push_back({15,0});
    g[2].push_back({50,3});

    g[3].push_back({30,0});
    g[3].push_back({40,1});
    g[3].push_back({50,2});

    cout << "Minimum Spanning Tree Total Weight : " << PrimsAlgo(V,g);

    return 0;
}