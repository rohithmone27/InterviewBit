void solve(int start, vector<int> &row, int sum, vector<vector<int>> &res, vector<int> &v, int B) {
    if(sum == B){
        res.push_back(row);
        return ;
    }
    for (int i = start; i < v.size(); i++) { 
        if (sum + v[i] > B) continue; 
        if (v[i] == v[i - 1] and i > start) continue; 
        row.push_back(v[i]); 
        solve(i + 1, row, sum + v[i], res, v, B); 
        row.pop_back(); 
    } 
}
 
vector<vector<int>> Solution::combinationSum(vector<int> &A, int B) {
    vector<vector<int>> res;
    vector<int> v;
    sort(A.begin(), A.end());
    solve(0, v, 0, res, A, B);
    return res;
}