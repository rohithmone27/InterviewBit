int dp[201][201];
int MergeCost(int i, int j, vector<int> &A){
    if(i==j) return 0;
    if(dp[i][j] != -1) return dp[i][j];
    int x = INT_MAX, tot = 0;
    for(int k=i; k<=j; k++) tot += A[k];
    for(int k=i+1; k<=j; k++){
        x = min(x, tot + MergeCost(i, k-1, A) + MergeCost(k, j, A));
    }
    dp[i][j] = x;
    return x;
}
int Solution::solve(vector<int> &A) {
    int n = A.size();
    memset(dp,-1,sizeof(dp));
    return MergeCost(0, n-1, A);
}