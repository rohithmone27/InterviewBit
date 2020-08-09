int Solution::solve(int A, int B) {
    if(B<1 || B>(9*A)) return 0;
    long long int dp[A][B];
    for(int i=0; i<B; i++){
        if(i<=8) dp[0][i] = 1;
        else dp[0][i] = 0;
    }
    for(int i=0; i<A; i++) dp[i][0] = 1;
    for(int i=1; i<A; i++){
        for(int j=1; j<B; j++){
            dp[i][j] = 0;
            int k=0;
            if(j>=9) k = j - 9;
            for(; k<=j; k++){
                dp[i][j] = (dp[i][j] + dp[i-1][k]) % 1000000007;
            }
        }
    }
    return dp[A-1][B-1] % 1000000007;
}