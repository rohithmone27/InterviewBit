int height(TreeNode *A){
    if(!A) return 0;
    int l = height(A->left);
    int r = height(A->right);
    return 1 + max(l, r);
}
int Solution::isBalanced(TreeNode* A) {
    if(!A) return 1;
    int l = height(A->left);
    int r = height(A->right);
    if(abs(l-r) > 1) return 0;
    return isBalanced(A->left) & isBalanced(A->right);
}