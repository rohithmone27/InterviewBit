void Sum(TreeNode* a, int b,vector<int>v, vector<vector<int>>&res){
    if(!a) return ;
    v.push_back(a->val);
    if(!a->left && !a->right && b-(a->val)==0){
        res.push_back(v);
        return;
    }
    Sum(a->left, b-(a->val), v, res);
    Sum(a->right, b-(a->val), v, res);
    v.pop_back();
    return ;
}
 
vector<vector<int> > Solution::pathSum(TreeNode* a, int b) {
    vector<int> d;
    vector<vector<int>> res;
    Sum(a, b, d, res);
    return res;
}