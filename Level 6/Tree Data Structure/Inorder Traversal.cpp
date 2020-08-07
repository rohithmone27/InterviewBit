vector<int> Solution::inorderTraversal(TreeNode* A) {
    TreeNode *p = A;
    stack<TreeNode *> s;
    vector<int> res;
    while(p || !s.empty()){
        if(p){
            s.push(p);
            p = p->left;
        }
        else{
            TreeNode *t = s.top();
            res.push_back(t->val);
            s.pop();
            p = t->right;
        }
    }
    return res;
}