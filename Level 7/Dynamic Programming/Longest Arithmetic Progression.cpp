int Solution::solve(const vector<int> &A) {
    int n = A.size(), i, k, res = 2;
    if(n<=2) return n;
    int a[n];
    for(int i=0;i<n;i++) a[i]=A[i];
    sort(a,a+n);
    vector<int> dp(n, 2);
    for(int j=n-2; j>=0; j--){
        i = j-1; 
        k = j+1;
        while(i>=0 && k<n){
            if(a[i] + a[k] == 2*a[j]){
                dp[j] = max(dp[j], dp[k]+1);
                res = max(res, dp[j]);
                i--;
                k++;
            }
            else if(a[i] + a[k] < 2*a[j]) k++;
            else i--;
        }
    }
    return res;
}