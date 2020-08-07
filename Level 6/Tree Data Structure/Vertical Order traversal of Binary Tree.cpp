vector<vector<int> > Solution::verticalOrderTraversal(TreeNode* A) {
    TreeNode* a = A;
     map<int,vector<int>> m;
    queue<pair<int,TreeNode *>>q;
    if(!a) return {};
    q.emplace(0,a);
    while(!q.empty())
    {
        auto[dist,temp]=q.front();
        q.pop();
        m[dist].push_back(temp->val);
        if(temp->left) q.emplace(dist-1,temp->left);
        if(temp->right) q.emplace(dist+1,temp->right);
    }
    vector<vector<int>> vec;
    for(auto x:m){
	vector<int> temp;
	for(auto i:x.second)
		temp.push_back(i);
	vec.push_back(temp);
    }
    return vec;
}