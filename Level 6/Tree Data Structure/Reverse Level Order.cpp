vector<int> Solution::solve(TreeNode* A) {
    queue<TreeNode *> q;
    stack<TreeNode *> s;
    vector<int> res;
    TreeNode *p = A;
    q.push(A);
    while(!q.empty()){
        A = q.front();
        q.pop();
        s.push(A);
        if(A->right) q.push(A->right);
        if(A->left) q.push(A->left);
    }
    while(!s.empty()){
        TreeNode *t = s.top();
        s.pop();
        res.push_back(t->val);
    }
    return res;
}