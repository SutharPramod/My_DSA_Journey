#include<iostream>
#include<vector>
#include<set>

using namespace std;

vector<vector<int>> points;
int time;

vector<int> dt , low;

void dfs(int u , int par , int  n , set<int> &ans , vector<vector<int>> &adj){
    dt[u] = low[u] = ++time;
    int children = 0;
    for(int v : adj[u]){
        if(dt[v] == -1){ // not visited
                dfs(v , u , n , ans ,adj);
                low[u] = min(low[u],low[v]);
                children++;
                if(par != -1 && low[v] >= dt[u]){
                    ans.insert(u);
                }
            }
        else if(v != par){ // visited
            low[u] = min(low[u],dt[v]);
        }
    }
    if(par == -1 && children > 1) ans.insert(u);
}

int main() {
    points.push_back({1,0});
    points.push_back({0,2});
    points.push_back({0,4});
    points.push_back({4,3});
    points.push_back({4,5});
    int n = 6;
    time = 0;

    vector<vector<int>> adj(n);
    dt.resize(n , -1);
    low.resize(n);

    for(int i = 0 ; i < points.size() ; i++){
        int u = points[i][0];
        int v = points[i][1];

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    set<int> ans;

    for(int i = 0 ; i < n ; i++){
        if(dt[i] == -1){
            dfs(i , -1, n , ans , adj);
        }
    }
    
    cout << "Articulation Points : " << endl;

    for(int i : ans){
        cout << i << endl;
    }
    return 0;
}