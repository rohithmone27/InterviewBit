void answer(TreeNode* root, int B, int level, vector<int> &res){
    if(level < 2) return ;
     if (level == 2) 
    { 
        if ((root->left != NULL && root->left->val == B) || (root->right != NULL && root->right->val == B)) 
            return; 
        if (root->left) {
            res.push_back(root->left->val);
        }
        if (root->right) 
            res.push_back(root->right->val);
    } 
    else if (level > 2) 
    { 
        answer(root->left, B, level - 1, res); 
        answer(root->right, B, level - 1, res); 
    } 
}
int level(TreeNode* A, int B, int f){
    if(A==NULL) return 0;
    if(A->val == B) return f;
    int d = level(A->left, B, f+1);
    if(d) return d;
    return level(A->right, B, f+1);
}
vector<int> Solution::solve(TreeNode* A, int B) {
    int l = level(A, B, 1);
    vector<int> res;
    answer(A, B, l, res);
    return res;
}