#include<iostream>
#include<list>
#include<stack>
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

    void dfs(int curr , vector<bool> &vis , stack<int> &s){
        vis[curr] = true;

        for(int v : l[curr]){
            if(!vis[v]){
                dfs(v,vis,s);
            }
        }

        s.push(curr);
    }

    void topologicalSorting(){
        vector<bool> vis(V,false);
        stack<int> s;
        
        for(int i = 0 ; i < V ; i++){
            if(!vis[i]){
                dfs(i,vis,s);
            }
        }

        cout << "Topological Sorting : ";

        while(s.size() > 0){
            cout << s.top() << " ";
            s.pop();
        }
    }

};

int main(){
    Graph g(4);

    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(1,3);
    g.addEdge(2,3);

    g.topologicalSorting();

    return 0;
}