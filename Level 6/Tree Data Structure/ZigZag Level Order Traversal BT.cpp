int height(TreeNode *A){
    if(!A) return 0;
    return 1 + max( height(A->left), height(A->right) );
}
void solve(TreeNode *A, vector<int> &s, bool name, int level){
    if(!A) return ;
    if(level == 1) s.push_back(A->val);
    else{
        if(name){
            solve(A->right, s, name, level-1);
            solve(A->left, s, name, level-1);
        }
        else{
            solve(A->left, s, name, level-1);
            solve(A->right, s, name, level-1);
        }
    }
}
vector<vector<int> > Solution::zigzagLevelOrder(TreeNode* A) {
    vector<vector<int>> res;
    int h = height(A);
    for(int i=1; i<=h; i++){
        vector<int> s;
        bool name=false;
        if(i%2==0) name = true;
        solve(A, s, name, i);
        res.push_back(s);
    }
    return res;
}