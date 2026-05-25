#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<pair<int , pair<int,int>>> edges;
vector<int> par , rk;

void gprint(){
    sort(edges.begin(),edges.end());
    for(auto edge : edges){
        cout << edge.second.first << " - " << edge.second.second << " -> " << edge.first << endl;
    }
}

int find(int x){
    if(par[x] == x) return x;
    return par[x] = find(par[x]);
}

int kruskalalgo(int n){
    sort(edges.begin(),edges.end());
    vector<pair<int,int>> ansedge;

    for(int i = 0 ; i < edges.size() ; i++){
        par.push_back(i);
        rk.push_back(0);
    }

    int v = 0 , i = 0 , mst = 0;
    for(int i = 0; i < edges.size() ; i++){
        if(v >= n - 1) return mst;
        auto temp = edges[i];
        int u = temp.second.first;
        int v = temp.second.second;
        int wt = temp.first;

        int parU = find(u);
        int parV = find(v);
        if(parU != parV){
            ansedge.push_back({u,v});
            mst += wt;
            if(rk[parU] == rk[parV]){
                par[parV] = parU;
                rk[parU]++;
            }
            else if(rk[parU] > rk[parV]){
                par[parV] = parU;
            }
            else{
                par[parU] = parV;
            }
            v++;
        }
    }
    cout << "MST EDGES : " << endl;
    for(int i = 0 ; i < ansedge.size() ; i++){
        cout << ansedge[i].first << " -> " << ansedge[i].second << endl;
    }
    cout << endl;
    return mst;
}

int main(){
    edges.push_back({6 , { 0 , 2}});
    edges.push_back({5 , { 0 , 3}});
    edges.push_back({10 , { 0 , 1}});
    edges.push_back({15 , { 1 , 3}});
    edges.push_back({4 , { 2 , 3}});

    gprint();
    cout << endl;
    cout << "MST SUM : " << kruskalalgo(4);
    return 0;
}