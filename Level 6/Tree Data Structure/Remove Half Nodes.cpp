TreeNode* solve2(TreeNode* A){
    if(!A) return A;
    A->left = solve2(A->left);
    A->right = solve2(A->right);
    if(A->left==NULL && A->right==NULL) return A;
    else if(A->left==NULL) {
        TreeNode *d = A->right;
        free(A);
        return d;
    }
    if(A->right==NULL){
        TreeNode *d = A->left;
        free(A);
        return d;
    }
    return A;
}
TreeNode* Solution::solve(TreeNode* A) {
    return solve2(A);
}