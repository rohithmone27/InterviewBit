vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) {
    int n = A.size();
    vector<vector<int> > a(2*n-1);
    int x, y, c=0;
    for(int i=0; i<n; i++){
        x=0, y=i;
        while(x<n && y>=0){
            a[c].push_back(A[x][y]);
            x++;
            y--;
        }
        c++;
    }
    for(int i=1; i<n; i++){
        x=i, y=n-1;
        while(x<n && y>=0){
            a[c].push_back(A[x][y]);
            x++;
            y--;
        }
        c++;
    }
    return a;
}
