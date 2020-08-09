bool iscycle(vector<vector<int>> &adj, vector<bool> &visited, int v, vector<bool> &recStack){
    
        visited[v] = 1; 
        recStack[v] = 1;  
        for(int u:adj[v])
        {
            if ( !visited[u] && iscycle(adj, visited, u, recStack) ) 
                return true; 
            else if (recStack[u]) 
                return true; 
        } 
    recStack[v] = 0;  
    return false; 
}
int Solution::solve(int A, vector<vector<int> > &B) {
    vector<vector<int>> graph(A+1);
    vector<bool> vis(A+1, false);
    vector<bool> s(A+1, false);
    for(auto t : B){
        graph[t[0]].push_back(t[1]);
    }
    for(int i=0; i<A; i++){
        if(!vis[i+1] && iscycle(graph, vis, i+1, s)) return 1;
    }
    return 0;
}