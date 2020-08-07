int maximum(vector<int> &A, int l, int r){
    int f = l;
    while(l<=r){
        if(A[l] > A[f]) f = l; 
        l++;
    }
    return f;
}
TreeNode* solve(vector<int> &A, int l, int r){
    if(l>r) return NULL;
    int m = max_element(A.begin()+l, A.begin()+r+1) - A.begin();
    TreeNode *start = new TreeNode(A[m]);
    start->left =  solve(A, l, m-1);
    start->right = solve(A, m+1, r);
    return start;
}
TreeNode* Solution::buildTree(vector<int> &A) {
    if(A.empty()) return NULL;
    return solve(A, 0, A.size()-1);
}