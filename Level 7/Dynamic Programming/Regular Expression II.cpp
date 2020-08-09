int Solution::isMatch(const string A, const string B) {
    int m = A.size(), n = B.size();
    bool dp[m+1][n+1];
    memset(dp, false, sizeof(dp));
    dp[0][0] = true;
    for(int i=1; i<n && B[i]=='*'; i+=2){
        dp[0][i] = true;
        dp[0][i+1] = true;
    }
    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            if(B[j-1]=='.' || B[j-1]==A[i-1]){
                dp[i][j] = dp[i-1][j-1];
            }
            else if(B[j-1] == '*' && j!=-1){
                dp[i][j] = ( dp[i][j-2] || (dp[i-1][j] && A[i-1]==B[j-2]) || B[j-2]=='.');
            }
        }
    }
    return dp[m][n];
}