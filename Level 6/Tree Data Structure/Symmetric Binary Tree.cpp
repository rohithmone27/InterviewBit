int solve(TreeNode *A, TreeNode *B){
    if(!A && !B) return 1;
    if(!A || !B) return 0;
    if(A->val!=B->val) return 0;
    return solve(A->left, B->right) && solve(A->right, B->left);
}
int Solution::isSymmetric(TreeNode* A) {
    return (A==NULL || solve(A->left, A->right));
}