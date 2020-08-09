vector<vector<int> > Solution::solve(int A, vector<vector<int> > &B) {
    int n = B.size();
    int m = B[0].size();
    if(n==0 && m==0) return B;
    vector<vector<int>> temp = B;
    for(int i=1; i<=A; i++){
        for(int j=0; j<n; j++){
            for(int k=0; k<m; k++){
                if(k>0){ B[j][k] = max(B[j][k], temp[j][k-1]); }
                if(j>0){ B[j][k] = max(B[j][k], temp[j-1][k]); } 
                if(k<m-1){ B[j][k] = max(B[j][k], temp[j][k+1]); } 
                if(j<n-1){ B[j][k] = max(B[j][k], temp[j+1][k]); }
            }
        }
        temp = B;
    }
    return B;
}