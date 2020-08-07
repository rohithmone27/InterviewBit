int Solution::solve(TreeNode* A) {
    queue<TreeNode *> q;
    int res = 0;
    q.push(A);
    while(!q.empty()){
        int n = q.size();
        int sum = 0;
        for(int i=0; i<n; i++){
            TreeNode *t = q.front();
            sum += t->val;
            q.pop();
            if(t->left) q.push(t->left);
            if(t->right) q.push(t->right);
        }
        res = max(res, sum);
    }
    return res;
}