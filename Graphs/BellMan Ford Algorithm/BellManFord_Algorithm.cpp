#include<iostream>
#include<vector>
#include<queue>
#include<climits>

using namespace std;

class Edge{
    public:
    int v , wt;

    Edge(int v , int wt){
        this->v = v;
        this->wt = wt;
    }
};

void BellManFord(int src , int V, vector<vector<Edge>> &g){
    vector<int> dist(V,INT_MAX);
    dist[src] = 0;
    for(int i = 0 ; i < V - 1 ; i++){
        for(int u = 0 ; u < V ; u++){
            for(Edge e : g[u]){
                if(dist[u] != INT_MAX && dist[e.v] > dist[u] + e.wt){
                    dist[e.v] = dist[u] + e.wt;
                }
            }
        }
    }

    for(int i = 0 ; i < V ; i++){
        cout << dist[i] << " ";
    }
}

int main(){
    int V = 5;
    vector<vector<Edge>> g(V);

    g[0].push_back({1,2});
    g[0].push_back({2,4});

    g[1].push_back({2,-4});
    g[1].push_back({4,-1});

    g[2].push_back({3,2});

    g[3].push_back({4,5});

    BellManFord(0,V,g);

    return 0;
}