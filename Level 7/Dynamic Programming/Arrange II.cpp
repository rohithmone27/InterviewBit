int Solution::arrange(string A, int B) {
    int n = A.size();
    int dp[n][B];
    memset(dp, 0, sizeof(dp));
    if(n < B) return -1;
    if(n == B) return 0;
    int w=0, b=0;
    for(int i=0; i<n; i++){
        if(A[i] == 'B') b++;
        else w++;
        dp[i][0] = b*w;
    }
    for(int j=1; j<B; j++){
        for(int i=0; i<n; i++){
            int b = 0, w = 0;
            dp[i][j] = INT_MAX;
            for(int k=i; k>=0; k--){
                if(A[k] == 'B') b++;
                else w++;
                dp[i][j] = min(dp[i][j], b*w + ( (k-1)>=0 ? dp[k-1][j-1] : 0) );
            }
        }
    }
    return dp[n-1][B-1];
}