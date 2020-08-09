bool ispal(string s){
    int i=0,j=s.length()-1;
    while(i<j){
        if(s[i]!=s[j]) return false;
        i++;
        j--;
    }
    return true;
}
int Solution::minCut(string A) {
    int n = A.size();
    int dp[n] ;
    for(int i=0;i<n;i++) dp[i]=INT_MAX;
    for(int i=0; i<n; i++){
        if(ispal(A.substr(0, i+1))) dp[i] = 0;
        else{
            for(int j=0; j<i; j++){
                if(ispal(A.substr(j+1, i-j))) dp[i] = min(dp[i], dp[j]+1);
            }
        }
    }
    return dp[n-1];
}