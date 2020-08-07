int dfs(vector<int> g[], int u, bool visit[], int& res) 
{ 
    visit[u] = true; 
    int currComponentNode = 0; 
    for (int i = 0; i < g[u].size(); i++) 
    { 
        int v = g[u][i]; 
        if (!visit[v]) 
        { 
            int subtreeNodeCount = dfs(g, v, visit, res); 
   
            if (subtreeNodeCount % 2 == 0) 
                res++;  
            else
                currComponentNode += subtreeNodeCount; 
        } 
    } 
    return (currComponentNode + 1); 
} 
int solve2(vector<int> g[], int N) 
{ 
    bool visit[N + 1]; 
    for (int i = 0; i <= N; i++) 
        visit[i] = false; 
    int res = 0; 
    dfs(g, 1, visit, res); 
    return res; 
} 
void add(vector<int> g[], int a, int b){
    g[a].push_back(b);
    g[b].push_back(a);
}
int Solution::solve(int A, vector<vector<int> > &B) {
    int n = B.size();
    vector<int> g[n+2];
    for(int i=0; i<n; i++){
        add(g, B[i][0], B[i][1]);
    }
    return solve2(g, n+1);
}