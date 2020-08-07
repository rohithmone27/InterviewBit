void solve(TreeNode* A, vector<int> &v){
    if(A==NULL) return ;
    solve(A->left, v);
    v.push_back(A->val);
    solve(A->right, v);
}
int Solution::kthsmallest(TreeNode* A, int B) {
    vector <int > d;
    solve(A, d);
    return d[B-1];
}