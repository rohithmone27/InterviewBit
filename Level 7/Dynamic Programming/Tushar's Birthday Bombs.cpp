vector<int> Solution::solve(int A, vector<int> &B) {
    int mi = *min_element(B.begin(), B.end());
    int maxk = A/mi;
    int t = mi * maxk;
    int minindex = min_element(B.begin(), B.end()) - B.begin();
    vector<int> dp(maxk, minindex);
    int i=0, s = 0;
    while(i < minindex && s < maxk){
        int value = t - B[dp[s]] + B[i];
        if(value <= A && value > t){
            dp[s++] = i;
            t = value;
        }
        else{
            i++;
        }
    }
    return dp;
}