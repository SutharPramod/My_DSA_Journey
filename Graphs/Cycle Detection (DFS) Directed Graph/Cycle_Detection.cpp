
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
    }

    bool helper(int src , vector<int> &vis){
        vis[src] = 1;

        for(auto v : l[src]){
            if(vis[v] == 1){
                return true;
            }
            else if(vis[v] == 0 && helper(v,vis)){
                return true;
            }
        }

        vis[src] = 2;
        return false;
    }

    bool DetectCycle(){
        vector<int> state(V,0);

        for(int i = 0 ; i < V ; i++){
            if(state[i] == 0){
                if(helper(i,state)) return true;
            }
        }
        return false;
    }

};

int main(){
    Graph g(4);

    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(3,1);
    g.addEdge(2,3);

    cout << (g.DetectCycle() ? "Cycle Detected" : "No cycle" );
    return 0;
}