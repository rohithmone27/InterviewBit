int Solution::minPathSum(vector<vector<int> > &A) {
    if(A.size() == 0) return 0;
    int r = A.size(), c = A[0].size();
    vector<vector<int>> dp(r, vector<int>(c));
    int sum = 0;
    for(int i=0; i<c; i++){
        dp[0][i] = sum + A[0][i];
        sum = dp[0][i];
    }
    sum = 0;
    for(int i=0; i<r; i++){
        dp[i][0] = sum + A[i][0];
        sum = dp[i][0];
    }
    for(int i=1; i<r; i++){
        for(int j=1; j<c; j++){
            dp[i][j] = A[i][j] + min(dp[i-1][j], dp[i][j-1]);
        }
    }
    return dp[r-1][c-1];
}