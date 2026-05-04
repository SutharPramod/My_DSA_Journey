//undirected unweighted graph

#include<iostream>
#include<list>
#include<queue>
#include<vector>

using namespace std;

class Graph{
    public:
    int V;
    list<int> *l;

    Graph(int v){
        V = v;
        l = new list<int> [V];
    }

    void addEdge(int u , int v){
        l[u].push_back(v);
        l[v].push_back(u);
    }

    bool bfs(int src , vector<bool> &vis , int par){
        queue<pair<int,int>> q;
        q.push({0,-1});
        vis[0] = true;

        while(q.size() > 0){
            int u = q.front().first;
            int par = q.front().second;
            q.pop();

            for(int v : l[u]){
                if(!vis[v]){
                    q.push({v,u});
                    vis[v] = true;
                }
                else if(v != par){
                    return true;
                }
            }
        }
        return false;
    }

    bool DetectCycle(){
        vector<bool> vis(V,false);

        for(int i = 0 ; i < V ; i++){
            if(!vis[i]){
                if(bfs(i,vis,-1)) return true;
            }
        }
        return false;
    }

};

int main(){
    Graph g(4);

    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(1,3);
    g.addEdge(2,3);

    cout << (g.DetectCycle() ? "Cycle Detected" : "No cycle" );
    return 0;
}