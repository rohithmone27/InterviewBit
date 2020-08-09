bool iscycle(vector<vector<int>> &g, vector<bool> &vis, int i, int p){
    vis[i] = true;
    for(auto t : g[i]){
        if(t != p){
            if(vis[t]) return true;
            if(iscycle(g, vis, t, i)) return true;
        }
    }
    return false;
}
int Solution::solve(int A, vector<vector<int> > &B) {
    vector<vector<int>> graph(A+1);
    vector<bool> vis(A+1, false);
    for(auto t : B){
        graph[t[0]].push_back(t[1]);
        graph[t[1]].push_back(t[0]);
    }
    for(int i=0; i<A; i++){
        if(!vis[i+1] && iscycle(graph, vis, i+1, -1)) return 1;
    }
    return 0;
}