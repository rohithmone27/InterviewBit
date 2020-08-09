int Solution::lis(const vector<int> &A) {
    if(A.size() == 0) return 0;
    int res = 1;
    vector<int > dp(A.size(), 1);
    for(int i=1; i<A.size(); i++){
        for(int j=0; j<i; j++){
            if(A[i] > A[j]) dp[i] = max(dp[i], dp[j]+1);
            if(res < dp[i]) res = dp[i];
        }
    }
    return res;
}