void solve(int start, vector<int> &row, int sum, vector<vector<int>> &res, vector<int> &v, int B) {
    if (sum == B) {
        res.emplace_back(row);
        return;
    }
    if (start == v.size() || sum > B) return;
    row.push_back(v[start]);
    sum += v[start];
    solve(start, row, sum, res, v, B);
    sum -= row[row.size() - 1];
    row.pop_back();
    solve(start + 1, row, sum, res, v, B);
}
 
vector<vector<int>> Solution::combinationSum(vector<int> &A, int B) {
    vector<vector<int>> res;
    vector<int> str, v;
    sort(A.begin(), A.end());
 
    v.push_back(A[0]);
    for (auto i = 1; i < A.size(); ++i)
        if (A[i - 1] != A[i])
            v.push_back(A[i]);
 
    solve(0, str, 0, res, v, B);
    return res;
}