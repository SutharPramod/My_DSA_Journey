//undirected unweighted graph

#include<iostream>
#include<list>
#include<queue>

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

    void helper(int u,vector<bool> &vis){
        cout << u << " ";
        vis[u] = true;

        for(int v : l[u]){
            if(!vis[v]){
                helper(v,vis);
            }
        }
    }

    void DFS(){
        int src = 0;
        vector<bool> vis(4,false);

        helper(0,vis);
    }
};

int main(){
    Graph g(5);

    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(1,3);
    g.addEdge(2,4);

    g.DFS();

    return 0;
}