vector<int> Solution::preorderTraversal(TreeNode* A) {
    vector<int> v;
    stack<TreeNode *> s;
    TreeNode *p=A;
    if(!A) return v;
    s.push(A);
    while(!s.empty()){
        TreeNode *f=s.top();
        v.push_back(f->val);
        s.pop();
        if(f->right) s.push(f->right);
        if(f->left) s.push(f->left);
         
    }
    return v;
}