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

void Dijkstra(int src , vector<vector<Edge>> &g, int V){
    priority_queue<pair<int,int> , vector<pair<int,int>> , greater<pair<int,int>> > pq;
    vector<int> dist(V,INT_MAX);

    pq.push({0,src});
    dist[src] = 0;

    while(pq.size() > 0){
        int u = pq.top().second;
        int d = pq.top().first;
        pq.pop();

        if(d > dist[u]) continue;

        for(Edge e : g[u]){
            if(dist[e.v] > d + e.wt){
                dist[e.v] = d + e.wt;
                pq.push({dist[e.v],e.v});
            }
        }
    }

    cout << "Distances : " ;
    for(int i = 0 ; i < V ; i++){
        cout << dist[i] << " ";
    }
    cout << endl;
}
int main(){
    int V = 6;
    vector<vector<Edge>> g(V);

    g[0].push_back({1,2});
    g[0].push_back({2,4});

    g[1].push_back({2,1});
    g[1].push_back({3,7});

    g[2].push_back({4,3});

    g[3].push_back({5,1});

    g[4].push_back({3,2});
    g[4].push_back({5,5});

    Dijkstra(0,g,V);

    return 0;
}