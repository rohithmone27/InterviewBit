bool palin(string str, int l, int h) 
{ 
    while (h > l) 
        if (str[l++] != str[h--]) 
            return false; 
    return true; 
} 
int Solution::anytwo(string A) {
    int n = A.size();
    if(n < 2) return 0;
    int dp[256];
    memset(dp, 0, sizeof(dp));
    for(int i=0; i<n; i++){
        dp[A[i]]++;
        if(dp[A[i]] > 2) return 1;
    }
    int k=0;
    for(int i=0; i<n; i++){
        if(dp[A[i]] > 1){
            A[k++] = A[i];
            
        }
    }
    A[k] = '\0'; 
    if(palin(A, 0, k-1)){
        if(k & 1) return A[k/2] == A[k/2-1];
        return 0;
    }
    return 1;
}