vector<int> Solution::solve(vector<int> &A, vector<int> &B) {
    priority_queue<pair<int, pair<int, int> > > pq;
    set<pair<int, int> > s;
    int n = A.size();
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    pq.push(make_pair(A[n-1]+B[n-1], make_pair(n-1, n-1)));
    s.insert(make_pair(n-1, n-1));
    vector<int> ans;
    for(int k=0; k<n; k++){
        pair<int, pair<int,int> > ne = pq.top();
        pq.pop();
        ans.push_back(ne.first);
        int i = ne.second.first;
        int j = ne.second.second;
        if(i>0 && j>=0 && s.find(make_pair(i-1, j)) == s.end()){
            pq.push(make_pair(A[i-1]+B[j], make_pair(i-1,j)));
            s.insert(make_pair(i-1,j));
        }
        if(i>=0 && j>0 && s.find(make_pair(i, j-1)) == s.end()){
            pq.push(make_pair(A[i]+B[j-1], make_pair(i,j-1)));
            s.insert(make_pair(i,j-1));
        }
    }
    return ans;
}