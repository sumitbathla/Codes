#include <bits/stdc++.h>
using namespace std;

void dfs(int src, vector<bool> &vis, vector<int> astro[], int &c){
    vis[src] = true;
    c++;
    for(auto i:astro[src]){
        if(!vis[i]){
            dfs(i, vis, astro, c);
        }
    }
}

long long journeyToMoon(int n, vector<int> astro[]) {
    vector<int> soln;
    vector<bool> vis(n, false);
    for(int i=0; i<n; i++){
        if(!vis[i]){
            int c=0;
            dfs(i, vis, astro, c);
            soln.push_back(c);
        }
    }
  
    long long tv = n;
    tv*=(n-1);
    tv/=2;
    for(int i=0; i<soln.size(); i++){
        long long tm = (soln[i]*(soln[i]-1)) / 2;
        tv -= tm;
    }
    return tv;
}

int main(){
    int v, e;
    cin>>v>>e;
    vector<int> g[v];
    for(int i=0; i<e; i++){
        int x, y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    long long res = journeyToMoon(v, g);
    cout<<res;
}
