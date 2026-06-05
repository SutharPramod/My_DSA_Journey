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

void floydWarshall(int V,vector<vector<Edge>> &g){

    vector<vector<int>> dist(V,vector<int>(V,1e9));

    for(int i = 0 ; i < V ; i++){
        dist[i][i] =  0;
    }

    for(int u = 0 ; u < V ; u++){
        for(Edge& neigh : g[u]){
            int v = neigh.v;
            int wt = neigh.wt;
            dist[u][v] = wt;
        }
    }

    for(int k = 0 ; k < V ; k++){
        for(int i = 0 ; i < V ; i++){
            for(int j = 0 ; j < V ; j++){
                dist[i][j] = min(dist[i][j] , dist[i][k] + dist[k][j]);
            }
        }
    }

    for(int i = 0 ; i < V ; i++){
        for(int j = 0 ; j < V ; j++){
            if(dist[i][j] == 1e9){
                cout << "INF " ;
            }
            else{
                cout << dist[i][j] << "   " ;
            }
        }
        cout << endl;
    }
}


int main(){
    int V = 4;
    vector<vector<Edge>> g(V);

    g[0].push_back({1,4});
    g[0].push_back({2,11});

    g[1].push_back({2,2});
    g[1].push_back({3,8});

    g[2].push_back({3,3});

    floydWarshall(V,g);

    return 0;
}