int Solution::solve(vector<int> &A) {
    int sum = 0, n= A.size();
    for(int i=0; i< n; i++) sum += A[i];
    int dp[n+1][sum+1];
    for(int i=0; i<=n; i++) dp[i][0] = 1;
    for(int i=1; i<=sum; i++) dp[0][i] = 0;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=sum; j++){
            dp[i][j] = dp[i-1][j];
            if(A[i-1] <= j) dp[i][j] |= dp[i-1][j-A[i-1]];
        }
    }
    int res = INT_MAX;
    for(int j=sum/2; j>=0; j--){
        if(dp[n][j]){
            res = sum  - (2*j);
            break;
        }
    }
    return res;
}