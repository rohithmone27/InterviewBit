bool ispal(string A, int a, int b){
    while(a < b){
        if(A[a] == A[b]){
            a++;
            b--;
        }
        else{
            return false;
        }
    }
    return true;
}
void solve(string A, vector<vector<string>> &res, vector<string> &v, int in){
    if(in == A.length()){
        res.push_back(v);
        return ;
    }
    for(int i=in; i<A.length(); i++){
        if(ispal(A, in, i)){
            v.push_back(A.substr(in, i-in+1));
            solve(A, res, v, i+1);
            v.pop_back();
        }
    }
}
vector<vector<string> > Solution::partition(string A) {
    vector<vector<string>> res;
    vector<string> v;
    solve(A, res, v, 0);
    return res;
}