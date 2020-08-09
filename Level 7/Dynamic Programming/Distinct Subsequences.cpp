int Solution::numDistinct(string A, string B) {
    int m = A.size(), n = B.size();
    if(n > m) return 0;
    vector<vector<int>> dp(n+1, vector<int> (m+1, 0));
    for(int i=0; i<=m; i++) dp[0][i] = 1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if(A[j-1] == B[i-1]) dp[i][j] = dp[i][j-1] + dp[i-1][j-1];
            else dp[i][j] = dp[i][j-1];
        }
    }
    return dp[n][m];
}