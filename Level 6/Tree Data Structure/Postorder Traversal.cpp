vector<int> Solution::postorderTraversal(TreeNode* A) {
    vector<int> v;
    stack<TreeNode *> s;
    TreeNode *p=A;
    if(!A) return v;
    s.push(A);
    while(!s.empty()){
        TreeNode *f=s.top();
        v.push_back(f->val);
        s.pop();
        if(f->left) s.push(f->left);
        if(f->right) s.push(f->right);
    }
    reverse(v.begin(), v.end());
    return v;
}