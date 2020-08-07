void solve(int n, int k, int ind, vector<int> &v, vector<vector<int>> &res){
    if(k==0){
        res.push_back(v);
        return ;
    }
    for(int i=ind; i<=n; i++){
        v.push_back(i);
        solve(n, k-1, i+1, v, res);
        v.pop_back();
    }
    
}
vector<vector<int> > Solution::combine(int A, int B) {
 vector<vector<int> > res;
 vector<int> v;
 solve(A, B, 1, v, res);
 return res;
}