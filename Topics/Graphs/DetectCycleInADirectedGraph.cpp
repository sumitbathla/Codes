bool solve(int src, vector<int> &vis, vector<int> &order, vector<int> adj[]){
    vis[src] = 1;
    order[src]=1;
    // vector<int>::iterator i;
    for(auto i: adj[src]){
        if(!vis[i]){
            bool tempRes = solve(i, vis, order, adj);
            if(tempRes){
                return true;
            }
        } else if(order[i]==1){
            return true;
        }
    }
    order[src] = 0;
    return false;
}

bool isCyclic(int V, vector<int> adj[]) {
   	vector<int> vis(V, 0);
   	vector<int> order(V, 0);
   	for(int i=0; i<V; i++){
   	    if(!vis[i]){
   	        bool res = solve(i, vis, order, adj);
   	        if(res==true){
   	            return true;
   	        }
   	    }
   	}
   	return false;
}
