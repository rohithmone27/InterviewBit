TreeNode* solve(const vector <int> &A, int l, int r){
    if(l>r) return NULL;
    int m = l+r >> 1;
    TreeNode *start = new TreeNode(A[m]);
    if(l==r) return start;
    start->left = solve(A, l, m-1);
    start->right = solve(A, m+1, r);
    return start;
}
TreeNode* Solution::sortedArrayToBST(const vector<int> &A) {
    if(A.empty()) return NULL;
    return solve(A,0, A.size()-1);
}