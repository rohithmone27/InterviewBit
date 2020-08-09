int x[]={1,-1,0,0,1,-1,1,-1};
int y[]={0,0,1,-1,1,1,-1,-1};
void dfs(vector<vector<int>> &a,vector<vector<int>> &vis,int i,int j,int &ans){
if(i<0 || j<0 || i==a.size() || j==a[0].size() || vis[i][j]!=-1 || a[i][j]==0){
    return;
}
ans++;
vis[i][j]=1;
for(int m=0; m<8; m++){
    int c = i + x[m];
    int d = j + y[m];
    dfs(a, vis, c, d, ans);
}
 
}
int Solution::solve(vector<vector<int> > &A) {
int n = A.size();
int m = A[0].size();
vector<vector<int>> vis(n,vector<int>(m,-1));
int res=0;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        int ans = 0;
        dfs(A,vis,i,j,ans);
        res = max(res,ans);
    }
}
return res;
}