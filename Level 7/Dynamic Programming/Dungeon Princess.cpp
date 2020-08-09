int Solution::calculateMinimumHP(vector<vector<int> > &A) {
    int m = A.size(), n = A[0].size();
    int dp[m][n];
    dp[m-1][n-1] = A[m-1][n-1] > 0 ? 1 : abs(A[m-1][n-1]) + 1;
    for(int i=m-2; i>=0; i--){
        dp[i][n-1] = max(dp[i+1][n-1]-A[i][n-1], 1);
    }
    for(int i=n-2; i>=0; i--){
        dp[m-1][i] = max(dp[m-1][i+1]-A[m-1][i], 1);
    }
    for(int i=m-2; i>=0; i--){
       for(int j=n-2; j>=0; j--){
           int r = min(dp[i+1][j], dp[i][j+1]);
           dp[i][j] = max(r - A[i][j], 1);
       }
    }
    return dp[0][0];
}