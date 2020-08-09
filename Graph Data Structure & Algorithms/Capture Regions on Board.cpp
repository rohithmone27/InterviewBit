bool ind[1002][1002];
vector<vector<char> > g;
int m, n;
void dfs(int x, int y){
    if(ind[x][y]) return;
    if(x<0 || x>=m || y<0 || y>=n) return;
    if(g[x][y]=='X') return;
    ind[x][y] = true;
    dfs(x, y-1);
    dfs(x, y+1);
    dfs(x-1, y);
    dfs(x+1, y);
}
void Solution::solve(vector<vector<char> > &A) {
    m = A.size();
    n = A[0].size();
    g = A;
    memset(ind, 0, sizeof(ind));
    for(int i=0; i<n; i++){
        if(A[0][i]!='X') dfs(0, i);
        if(A[m-1][i]!='X') dfs(m-1, i);
    }
    for(int i=0; i<m; i++){
        if(A[i][0]!='X') dfs(i, 0);
        if(A[i][n-1]!='X') dfs(i, n-1);
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(!ind[i][j]) A[i][j] = 'X';
        }
    }
}