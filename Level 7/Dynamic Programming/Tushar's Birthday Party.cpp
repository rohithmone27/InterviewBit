int Solution::solve(const vector<int> &A, const vector<int> &B, const vector<int> &C) {
    int d = *max_element(A.begin(), A.end());
    vector<long long> dp(d+1, INT_MAX);
    dp[0] = 0;
    for(int i=0; i<B.size(); i++){
        for(int j=B[i]; j<=d; j++){
            dp[j] = min(dp[j], dp[j-B[i]] + C[i]);
        }
    }
    for(auto i:A) dp[0]+=dp[i];
    return dp[0];
}
 