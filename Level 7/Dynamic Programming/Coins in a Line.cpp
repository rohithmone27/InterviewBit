
int Solution::maxcoin(vector<int> &A) {
    int n = A.size();
    int dp[n][n];
    for(int k=0; k<n; k++){
        for(int i=0, j=k; j<n; i++, j++){
            int a = (i+2 <= j ) ? dp[i+2][j] : 0; 
            int b = (i+1 <= j-1 ) ? dp[i+1][j-1] : 0;
            int c = (i <= j-2 ) ? dp[i][j-2] : 0;
            dp[i][j] = max( A[i]+min(a, b), A[j]+min(b,c) );
        }
    }
    return dp[0][n-1];
}