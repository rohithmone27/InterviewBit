int Solution::isInterleave(string A, string B, string C) {
    int a = A.size(), b = B.size(), c = C.size();
    if(a+b != c) return 0;
    vector<vector<int> > dp(a+1, vector<int>(b+1, 0));
    dp[0][0] = 1;
    for(int i=1; i<a+1; i++){
        if(A[i-1] == C[i-1]) dp[i][0] = dp[i-1][0];
    }
    for(int i=1; i<b+1; i++){
        if(B[i-1] == C[i-1]) dp[0][i] = dp[0][i-1];
    }
    for(int i=1; i<=a; i++){
        for(int j=1; j<=b; j++){
            if(A[i-1] == C[i+j-1] && B[j-1] == C[i+j-1]) dp[i][j] = max(dp[i][j-1], dp[i-1][j]);
            else if(B[j-1] == C[i+j-1]) dp[i][j] = dp[i][j-1];
            else if(A[i-1] == C[i+j-1]) dp[i][j] = dp[i-1][j];
        }
    }
    return dp[a][b];
}