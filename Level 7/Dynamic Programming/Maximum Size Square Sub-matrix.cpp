int Solution::solve(vector<vector<int> > &A) {
    int m = A.size(), n = A[0].size();
    for(int i=1; i<m; i++){
        for(int j=1; j<n; j++){
            if(A[i][j]) A[i][j] = min(A[i][j-1], min(A[i-1][j], A[i-1][j-1])) + 1;
            
        }
    }
    int res = 0;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            res = max(res, A[i][j]);
        }
    }
    res *= res;
    return res;
}