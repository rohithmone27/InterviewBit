void dfs(vector<int> d[], vector<int> &vis, vector<int> &a, int ind){
    a.push_back(ind);
    vis[ind] = 1;
    for(int i=0; i<d[ind].size(); i++){
        if(vis[d[ind][i]] == 0) dfs(d, vis, a, d[ind][i]);
    }
}
int Solution::solve(vector<int> &A, vector<int> &B, vector<vector<int> > &C) {
    vector<int> d[A.size()+1];
    vector<int> vis(A.size()+1, 0);
    for(int i=0; i<C.size(); i++){
        d[C[i][0]].push_back(C[i][1]);
        d[C[i][1]].push_back(C[i][0]);
    }
    for(int i=0; i<A.size(); i++){
        if(vis[i+1] == 0){
            vector<int> a, b, c;
            dfs(d, vis, a, i+1);
            for(int j=0; j<a.size(); j++){
                b.push_back(A[a[j]-1]);
                c.push_back(B[a[j]-1]);
            }
            sort(b.begin(), b.end());
            sort(c.begin(), c.end());
            for(int j=0; j<a.size(); j++){
                if(b[j] != c[j]) return 0;
            }
        }
    }
    return 1;
}