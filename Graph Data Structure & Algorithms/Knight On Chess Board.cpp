struct solve{
    int i,j,r;
    solve(int x, int y, int z): i(x), j(y), r(z){}
};
int Solution::knight(int A, int B, int C, int D, int E, int F) {
    int li[] = {-2, -2, -1 ,-1, 1, 1, 2, 2};
    int ri[] = {-1, 1, -2, 2, -2, 2, -1, 1};
    bool vis[A+1][B+1];
    memset(vis, false, sizeof(vis));
    vis[C][D] = true;
    queue<solve> q;
    q.push(solve(C, D, 0));
    while(!q.empty()){
        solve t = q.front();
        q.pop();
        if(t.i == E && t.j == F) return t.r;
        for(int k=0; k<8; k++){
            int m = t.i + li[k];
            int n = t.j + ri[k];
            if(m>0 && m<=A && n>0 && n<=B && !vis[m][n]){
                vis[m][n] = true;
                q.push(solve(m, n, t.r + 1));
            }
        }
    }
    return -1;
}