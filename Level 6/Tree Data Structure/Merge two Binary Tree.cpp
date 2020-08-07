void solve2(TreeNode* A, TreeNode* B, TreeNode* c, bool value){
    if(!A && !B) return;
    if(!B) return;
    if(!A){
        TreeNode *t = B;
        if(value){
            c->right = t;
            return;
        }
        else{
            c->left = t;
            return ;
        }
    }
    A->val += B->val;
    solve2(A->left, B->left, A, false);
    solve2(A->right, B->right, A, true);
}
TreeNode* Solution::solve(TreeNode* A, TreeNode* B) {
    if(!A) return B;
    if(!B) return A;
    solve2(A, B, A, NULL);
    return A;
}