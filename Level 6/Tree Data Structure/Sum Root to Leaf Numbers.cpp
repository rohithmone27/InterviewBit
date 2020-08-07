int solve(TreeNode *A, int num){
    if(!A) return 0;
    num = ( (num*10)%1003 + (A->val)%1003 ) % 1003;
    if(!A->left && !A->right) return num;
    return ( solve(A->left, num)%1003 + solve(A->right, num)%1003 ) % 1003;
}
int Solution::sumNumbers(TreeNode* A) {
    if(!A) return 0;
    return solve(A, 0);
}