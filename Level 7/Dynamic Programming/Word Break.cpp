×
int Solution::wordBreak(string str, vector<string> &B) {
    unordered_set<string> s;
    if(B.empty()) return 0;
    for(auto t : B) s.insert(t);
    int dp[str.size()+1] = {0};
    dp[0] = 1;
    for(int i=1; i<=str.size(); i++){
        for(int j=i-1; j>=0; j--){
            if(dp[j]){
                if(s.find(str.substr(j, i-j)) != s.end()){
                    dp[i] = 1;
                    break;
                }
            }
        }
    }
    return dp[str.size()];
}