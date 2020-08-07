int index(vector<int> &A, int l, int r, int value){
    for(int i=l; i<=r; i++){
        if(A[i]==value) return i;
    }
}
TreeNode *solve(vector<int> &A, vector<int> &B, int l, int r, int &g){
    if(l>r) return NULL;
    TreeNode *start = new TreeNode(A[g++]);
    if(l==r) return start;
    int m = index(B, l, r, start->val);
    start->left = solve(A, B, l, m-1, g);
    start->right = solve(A, B, m+1, r, g);
    return start;
}
TreeNode* Solution::buildTree(vector<int> &A, vector<int> &B) {
    if(A.empty() || B.empty()) return  NULL;
    int g=0;
    return solve(A, B, 0, A.size()-1, g);
}