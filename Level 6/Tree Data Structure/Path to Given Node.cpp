bool solve2(TreeNode* A, int B, vector<int> &res){
    if(!A) return false;
    res.push_back(A->val);
    if(A->val == B) return true;
    if(solve2(A->left, B, res) || solve2(A->right, B, res)) return true;
    res.pop_back();
    return false;
}
vector<int> Solution::solve(TreeNode* A, int B) {
    vector<int> res;
    solve2(A, B, res);
    return res;
}