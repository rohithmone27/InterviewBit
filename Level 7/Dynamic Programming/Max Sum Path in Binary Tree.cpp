int solve(TreeNode* A, int &res){
    if(A==NULL) return 0;
    int l = solve(A->left, res);
    int r = solve(A->right, res);
    int v = max(A->val, A->val + max(l,r));
    int w = max(v, l+r+A->val);
    res = max(res, w);
    return v;
}
int Solution::maxPathSum(TreeNode* A) {
    int res = INT_MIN;
    solve(A, res);
    return res;
}