bool find(TreeNode* A, int B){
    if(!A) return 0;
    if(A->val == B) return 1;
    return (find(A->left, B) || find(A->right, B));
}
TreeNode *solve(TreeNode* A, int B, int C){
    if(!A || A->val==B || A->val==C) return A;
    TreeNode *l = solve(A->left, B, C);
    TreeNode *r = solve(A->right, B, C);
    if(l && r) return A;
    return l ? l : r;
}
int Solution::lca(TreeNode* A, int B, int C) {
    int val1 =B, val2 = C;
    TreeNode *root =A;
    if (!find(root, val1) || !find(root, val2)) return -1;
    TreeNode *ans = solve(root, val1, val2);
    return ans->val;
}