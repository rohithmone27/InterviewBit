vector<vector<int> > Solution::levelOrder(TreeNode* A) {
    vector<vector<int>> res;
    queue<TreeNode*> q;
    q.push(A);
    
    while(!q.empty())
    {
        int sz = q.size();
        vector<int> v;
        for(auto i=0; i<sz; i++)
        {
            TreeNode *t = q.front();
            q.pop();
            
            v.push_back(t->val);
        
            if(t->left) q.push(t->left);
            if(t->right) q.push(t->right);
        }
        
        res.push_back(v);
    }
    
    return res;
}