vector<int> Solution::solve(vector<vector<int> > &A) {
    
    priority_queue<pair<int,pair<int,int>>, vector<pair<int,pair<int,int>>>, greater<pair<int, pair<int, int>>>> p;
    for(int i=0; i<A.size(); i++) p.push(make_pair(A[i][0], make_pair(0, i)));
    vector<int> res;
    while(!p.empty()){
        res.push_back(p.top().first);
        int i = p.top().second.first;
        int j = p.top().second.second;
        p.pop();
        if(i < A[j].size()-1){
            i++;
            p.push({A[j][i], {i, j}});
        }
    }
    return res;
}