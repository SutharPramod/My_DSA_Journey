//undirected unweighted graph

#include<iostream>
#include<list>
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

    bool helper(int src , vector<bool> &vis , int par){
        vis[src] = true;

        for(auto v : l[src]){
            if(!vis[v]){
                if(helper(v,vis,src)) return true;
            }
            else if(par != src){
                return true;
            }
        }

        return false;
    }

    bool DetectCycle(){
        vector<bool> vis(V,false);

        for(int i = 0 ; i < V ; i++){
            if(!vis[i]){
                if(helper(i,vis,-1)) return true;
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