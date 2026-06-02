#include <iostream>
#include <vector>
#include <list>
#include <stack>
using namespace std;

class graph
{
public:
    int V;
    list<int> *l;
    list<int> *l2;

    graph(int V)
    {
        this->V = V;
        l = new list<int>[V];
        l2 = new list<int>[V];
    }

    void addEdge(int u, int v)
    {
        l[u].push_back(v);
    }

    void print()
    {
        for (int i = 0; i < V; i++)
        {
            for (int neigh : l[i])
            {
                cout << "(" << i << "," << neigh << ")" << endl;
            }
        }
        cout << endl;
    }

    void print2()
    {
        for (int i = 0; i < V; i++)
        {
            for (int neigh : l2[i])
            {
                cout << "(" << i << "," << neigh << ")" << endl;
            }
        }
        cout << endl;
    }

    void topo(int curr, vector<bool> &vis, stack<int> &s)
    {
        vis[curr] = true;

        for (int v : l[curr])
        {
            if (!vis[v])
            {
                topo(v, vis, s);
            }
        }
        s.push(curr);
    }

    void transpose()
    {
        for (int i = 0; i < V; i++)
        {
            for (int neigh : l[i])
            {
                l2[neigh].push_back(i);
            }
        }
    }
    
    void dfs(int curr, vector<bool> &vis, vector<int> &c)
    {
        vis[curr] = true;
        c.push_back(curr);
        for (int v : l2[curr])
        {
            if (!vis[v])
            {
                dfs(v, vis, c);
            }
        }
    }
};

int main()
{

    int V = 5;
    graph g(V);
    g.addEdge(0, 2);
    g.addEdge(2, 1);
    g.addEdge(1, 0);
    g.addEdge(0, 3);
    g.addEdge(3, 4);
    g.transpose();

    vector<bool> vis(V, false);
    stack<int> s;

    for (int i = 0; i < V; i++)
    {
        if (!vis[i])
        {
            g.topo(i, vis, s);
        }
    }

    vis.assign(V, false);
    vector<vector<int>> ans;

    while (s.size() > 0)
    {
        int u = s.top();
        s.pop();
        vector<int> c;
        if (!vis[u])
            g.dfs(u, vis, c);
        if (c.size() > 0)
            ans.push_back(c);
    }

    cout << "No. of Strongly Connected Components : " << ans.size() << endl << endl;
    cout << "Strongly Connected Components : " << endl;
    for (vector<int> &c : ans)
    {
        for (int n : c)
        {
            cout << n << " ";
        }
        cout << endl;
    }

    return 0;
}