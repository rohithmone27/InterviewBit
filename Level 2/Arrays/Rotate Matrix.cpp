void Solution::rotate(vector<vector<int> > &A) {
    int n = A.size();
    for(int i=0; i<n/2; i++){
        for(int j=i; j<n-i-1; j++){
            int t = A[i][j];
            A[i][j] = A[n-j-1][i];
            A[n-j-1][i] = A[n-i-1][n-j-1];
            A[n-i-1][n-j-1] = A[j][n-i-1];
            A[j][n-i-1] = t;
        }
    }
}
