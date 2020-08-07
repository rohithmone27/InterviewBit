vector<int> Solution::solve(TreeNode* A) {
    vector<int> res;
    queue<TreeNode *> q;
    q.push(A);
    while(!q.empty()){
        int n = q.size();
        for(int i=1; i<=n; i++){
            TreeNode *t = q.front();
            q.pop();
            if(i==1) res.push_back(t->val);
            if(t->right) q.push(t->right);
            if(t->left) q.push(t->left);
        }
    }
    return res;
}