#define ll long long
#define mod 1000000007
vector<vector<ll>> combinations(int A){
    vector<vector<ll>> ans(A+1, vector<ll>(A + 1));
    for(int i=0; i<=A; i++){
        for(int j=0; j<=i; j++){
            if(j==0 || j==i){
                ans[i][j] = 1;
            }
            else{
                ans[i][j] = ( ans[i-1][j]%mod + ans[i-1][j-1]%mod ) % mod;
            }
        }
    }
    return ans;
}
int df(int A){
    if(A==1) return 0;
    int h = log2(A);
    int m = (1<<h);
    int am = A - ((1<<h)-1);
    if(am >= m/2) return (1<<h)-1;
    return (1<<h)-1-(m/2-am);
}
int Solution::solve(int A) {
    vector<vector<ll>> nc = combinations(A);
    vector<ll> dp(A+1);
    dp[0] = dp[1] = 1;
    for(int i=2; i<=A; i++){
        int l = df(i);
        dp[i] = ( (nc[i-1][l] * dp[l])%mod * (dp[i-l-1])%mod ) %mod;
    }
    return dp[A];
}