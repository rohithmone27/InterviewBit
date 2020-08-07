int Solution::maxDepth(TreeNode* A) {
    if(!A) return 0;
    return 1 + max(maxDepth(A->left) , maxDepth(A->right));
}