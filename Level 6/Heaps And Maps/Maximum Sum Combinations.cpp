×
vector<int> Solution::solve(vector<int> &A, vector<int> &B, int C) {
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    priority_queue<pair<int, pair<int, int>>> q;
    vector<int> res;
    int i=A.size()-1, j=B.size()-1;
    for(; i>=0; i--) q.push({A[i]+B[j], {i, j}});
    while(C--){
        auto t = q.top();
        q.pop();
        res.push_back(t.first);
        q.push({A[t.second.first] + B[t.second.second-1], {t.second.first, t.second.second-1}});
    }
    return res;
}