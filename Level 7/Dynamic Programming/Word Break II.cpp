bool contains(string s, vector<string> B){
    for(int i=0; i<B.size(); i++){
        if(B[i].compare(s) == 0) return 1;
    }
    return 0;
}
void solve(string A, vector<string> &B, string dummy, vector<string> &res){
    if(A == ""){
        res.push_back(dummy);
        return;
    }
    int n = A.size();
    for(int i=1; i<=n; i++){
        string s = A.substr(0, i);
        if(contains(s, B)){
            string prev_new;
            if(dummy=="") prev_new = s;
            else prev_new = dummy + " " + s;
            solve(A.substr(i, n-i), B, prev_new, res);
        }
    }
}
vector<string> Solution::wordBreak(string A, vector<string> &B) {
    vector<string> res;
    solve(A, B, "", res);
    return res;
}