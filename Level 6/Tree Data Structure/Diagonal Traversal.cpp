void solve2(TreeNode* A, int d, map<int, vector<int>> &m){
    if(!A) return ;
    m[d].push_back(A->val);
    solve2(A->left, d+1, m);
    solve2(A->right, d, m);
}
vector<int> Solution::solve(TreeNode* A) {
    map<int, vector<int>> m;
    vector<int> res;
    solve2(A, 0, m);
    for(auto it= m.begin(); it!=m.end(); it++){
        for(auto it2 = it->second.begin(); it2!=it->second.end(); it2++){
            res.push_back(*it2);
        }
    }
    return res;
}