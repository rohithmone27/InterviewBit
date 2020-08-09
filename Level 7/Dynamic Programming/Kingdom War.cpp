int Solution::solve(vector<vector<int> > &A) {
    int r = A.size(), c = A[0].size();
    int res = INT_MIN;
    for(int i=r-1;i>=0;i--) {
        for(int j=c-1;j>=0;j--) {
            if(i==(r-1) && j==(c-1)) {
                
            }
            else if(i==(r-1)) {
                A[i][j]+=A[i][j+1];
            }
            else if(j==(c-1)) {
                A[i][j]+=A[i+1][j];
            }
            else {
                A[i][j]+=A[i][j+1]+A[i+1][j]-A[i+1][j+1];
            }
            res=max(res, A[i][j]);
        }
    }
    return res;
}