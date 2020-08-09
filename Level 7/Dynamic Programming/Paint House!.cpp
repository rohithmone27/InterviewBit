int Solution::solve(vector<vector<int> > &A) {
    int n = A.size();
    if(n == 0) return 0;
    for(int i=1; i<n; i++){
        A[i][0] += min(A[i-1][1], A[i-1][2]);
        A[i][1] += min(A[i-1][0], A[i-1][2]);
        A[i][2] += min(A[i-1][0], A[i-1][1]);
    }
    return min(A[n-1][0], min(A[n-1][1], A[n-1][2]));
}