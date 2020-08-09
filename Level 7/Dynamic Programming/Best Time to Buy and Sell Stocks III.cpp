int Solution::maxProfit(const vector<int> &A) {
    int n = A.size();
    if(n==0) return 0;
    int dp1[n+1], dp2[n+1];
    dp1[0] = 0;
    int mi = A[0];
    for(int i=1; i<n; i++){
        mi = min(mi, A[i]);
        dp1[i] = max(dp1[i-1], A[i]-mi);
    }
    int mx = A[n-1];
    dp2[n-1]=0;
    for(int i=n-2;i>=0;i--){
        mx = max(mx, A[i]);
        dp2[i] = max(dp2[i+1], mx-A[i]);
    }
 
    int res = 0;
    for(int i=0; i<n; i++){
        res = max(res, dp1[i]+dp2[i]);
    }
    return res;
}