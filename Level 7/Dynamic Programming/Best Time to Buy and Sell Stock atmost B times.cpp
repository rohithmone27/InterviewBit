#define ll long long
int Solution::solve(vector<int> &A, int B) {
    ll n = A.size();
    ll b=min((ll)B, n/2);
    ll dp[b+1][n];
    for(ll i=0; i<n; i++) dp[0][i] = 0;
    for(ll i=0; i<=b; i++) dp[i][0] = 0;
    for(ll i=1; i<=b; i++){
        ll prevdif =  0;
        for(ll j=1; j<n; j++){
            if(j==1) prevdif -= A[j-1];
            else prevdif = max(prevdif, dp[i-1][j-2]-A[j-1]);
            dp[i][j] = max(dp[i][j-1], A[j]+prevdif);
        }
    }
    return dp[b][n-1];
}