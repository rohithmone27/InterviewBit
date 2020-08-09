int Solution::solve(vector<vector<int> > &A) {
    int m = A.size(), n = A[0].size();
    for(int i=1; i<m; i++){
        for(int j=0; j<n; j++){
            if(A[i][j]) A[i][j]+=A[i-1][j];
        }
    }
    int res=0;
    for(int i=0;i<A.size();i++){ 
        sort(A[i].begin(),A[i].end(),greater());
        for(int j=0;j<A[i].size();j++){
            res=max(res,A[i][j]*(j+1));
        }
    }
    return res;
}