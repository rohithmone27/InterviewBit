void solve(TreeNode* A){
    if(A==NULL) return ;
    solve(A->left);
    solve(A->right);
    TreeNode *t = A->left;
    A->left = A->right;
    A->right = t;
}
TreeNode* Solution::invertTree(TreeNode* A) {
    solve(A);
    return A;
}