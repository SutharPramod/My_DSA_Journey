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

    void BFS(){
        queue<int> q;
        vector<bool> vis(V,false);

        q.push(0);
        vis[0] = true;

        while(q.size() > 0){
            int u = q.front();
            cout << u << " ";
            q.pop();

            for(int v : l[u]){
                if(!vis[v]){
                    vis[v] = true;
                    q.push(v);
                }
            }
        }
        cout << endl;
    }
};

int main(){
    Graph g(4);

    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(1,3);
    g.addEdge(2,3);

    g.BFS();

    return 0;
}