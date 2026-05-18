//connected undirected unweighted graph

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

    void print(){
        for(int i = 0 ; i < V ; i++){
            cout << i << " : ";
            for(int neigh : l[i]){
                cout << neigh << " ";
            }
            cout << endl;
        }
    }

    vector<int> shortestPath(int src){
        vector<int> ans(V,-1);
        queue<int> q;
        
        q.push(src);
        ans[src] = 0;

        while(q.size() > 0){
            int u = q.front();
            q.pop();

            for(int v : l[u]){
                if(ans[v] == -1){
                    q.push(v);
                    ans[v] = ans[u] + 1;
                }
            }

        }
        return ans;
    }

};

int main(){
    Graph g(7);

    g.addEdge(0,1);
    g.addEdge(0,2);
    g.addEdge(0,6);
    g.addEdge(0,3);
    g.addEdge(3,4);
    g.addEdge(2,5);
    
    vector<int> ans = g.shortestPath(1);

    for(int i = 0 ; i < ans.size() ; i++){
        cout << i << " : " << ans[i] << endl;
    }

    return 0;
}