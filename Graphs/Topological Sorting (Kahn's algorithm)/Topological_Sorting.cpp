#include<iostream>
#include<list>
#include<stack>
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
        vector<int> res;
        queue<int> q;

        vector<int> indegree(V,0);
        for(int i = 0 ; i < V ; i++)
        {
            for(int v : l[i]){
                indegree[v]++;
            }
        }

        for(int i = 0 ; i < V ; i++){
            if(indegree[i] == 0){
                q.push(i);
            }
        }

        while (q.size() > 0)
        {
            int curr = q.front();
            res.push_back(curr);
            q.pop();

            for(int v : l[curr]){
                indegree[v]--;
                if(indegree[v] == 0){
                    q.push(v);
                }
            }
        }

        cout << "Topological sort : ";
        for(int i : res){
            cout << i << " ";
        }
        
    }

};

int main(){
    Graph g(6);

    g.addEdge(3,1);
    g.addEdge(2,3);
    g.addEdge(4,0);
    g.addEdge(4,1);
    g.addEdge(5,0);
    g.addEdge(5,2);

    g.topologicalSorting();

    return 0;
}