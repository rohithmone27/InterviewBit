int Solution::isMatch(const string A, const string B) {
    int m=A.size(), n=B.size();
    bool dp[m+1][n+1];
    memset(dp, false, sizeof(dp));
    dp[0][0] = true;
    for(int i=1; i<=n; i++){
        if(B[i-1] == '*') dp[0][i] = dp[0][i-1]; 
    }
    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            if(B[j-1] == '*'){
                dp[i][j] = dp[i][j-1] || dp[i-1][j];
            }
            else if(B[j-1] == '?' || B[j-1]==A[i-1]){
                dp[i][j] = dp[i-1][j-1];
            }
            else dp[i][j] = false;
        }
    }
    return dp[m][n];
}