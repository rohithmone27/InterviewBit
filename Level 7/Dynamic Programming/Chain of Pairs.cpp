int Solution::solve(vector<vector<int> > &A) {
    int n = A.size();
    int ans = 0;
    if(!n) return ans;
    vector<int> dp(n,1);
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(A[i][1] < A[j][0]){
                dp[j] = max(dp[j] , dp[i] + 1);
                ans = max(ans,dp[j]);
            }
        }
    }
    return *max_element(dp.begin(),dp.end());
}