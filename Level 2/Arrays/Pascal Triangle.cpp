vector<vector<int> > Solution::solve(int A) {
    int n=A;
    vector<vector<int> > b(n);
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            b[i].push_back(1);
        }
    }
    for(int i=2; i<n; i++){
        for(int j=1; j<i; j++){
            b[i][j] = b[i-1][j] +b[i-1][j-1];
        }
    }
    return b;
}
