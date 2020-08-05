int Solution::maximumGap(const vector<int> &A) {
    int n = A.size();
    vector<pair<int, int> > b;
    for(int i=0; i<n; i++){
        b.push_back(make_pair(A[i], i));
    }
    sort(b.begin(), b.end());
    int ans=0, m = b[n-1].second;
    for(int i=n-2; i>=0; i--){
        ans = max(ans, m-b[i].second);
        m = max(m, b[i].second);
    }
    return ans;
}
