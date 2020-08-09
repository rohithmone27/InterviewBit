int Solution::solve(vector<vector<int> > &A) {
    int m = A.size(), n = A[0].size();
    int dp[m][n] ;
    memset(dp, -1, sizeof(dp));
    dp[0][0] = 1;
    for(int i=1; i<n; i++){
        if(A[0][i-1] < A[0][i]) dp[0][i] = dp[0][i-1] + 1;
        else break;
    }
    for(int i=1; i<m; i++){
        if(A[i-1][0] < A[i][0]) dp[i][0] = dp[i-1][0] + 1;
        else break;
    }
    for(int i=1; i<m; i++){
        for(int j=1; j<n; j++){
            if(dp[i][j-1]==-1) return -1;
            int t1 = INT_MIN, t2 = INT_MIN;
            if(dp[i-1][j]!=-1 && A[i-1][j] < A[i][j]) t1 = dp[i-1][j] + 1;
            if(dp[i][j-1]!=-1 && A[i][j-1] < A[i][j]) t2 = dp[i][j-1] + 1;
            dp[i][j] = max(t1, t2);
        }
    }
    return dp[m-1][n-1];
}