int Solution::solve(vector<int> &A, vector<int> &B, int C) {
    int n = A.size();
    vector<vector<int>> dp(n+1,vector<int>(C+1, 0));
    for(int i=1; i<=n; i++){
        for(int j=1; j<=C; j++){
            if(B[i-1] <= j) dp[i][j] = max(dp[i-1][j], dp[i-1][j-B[i-1]] + A[i-1]);
            else dp[i][j] = dp[i-1][j];
        }
    }
    return dp[n][C];
}