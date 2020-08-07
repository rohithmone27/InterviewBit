void solve(vector<vector<int> > &res, int ind, vector<int> &v){
    if(ind >= v.size()){
        res.push_back(v);
        return ;
    }
    for(int i=ind; i<v.size(); i++){
        swap(v[i], v[ind]);
        solve(res, ind+1, v);
        swap(v[i], v[ind]);
    }
}
vector<vector<int> > Solution::permute(vector<int> &A) {
    vector<vector<int>> res;
    solve(res, 0, A);
    return res;
}
 