void solve(vector<int> &A, vector<int> v, vector<vector<int>> &res, int index) {
    for (int i = index; i < A.size(); i++) {
        v.push_back(A[i]);
        res.push_back(v);
        solve(A, v, res, i+1);
        while(i < A.size()-1 && A[i]==A[i+1]) i++;
        v.pop_back();
    }
}
 
vector<vector<int> > Solution::subsetsWithDup(vector<int> &A) {
    vector<vector<int>> ans;
    vector<int> tempAns;
    ans.push_back(tempAns);
    sort(A.begin(), A.end());
    solve(A, tempAns, ans, 0);
    return ans;
}