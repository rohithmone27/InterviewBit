int Solution::searchMatrix(vector<vector<int> > &A, int B) {
    int n = A.size(), l=0, row=-1, g = A[0].size(), r = g -1 ;
    for(int i=0; i<n; i++){
        if(B>=A[i][0]&&B<=A[i][g-1]){
            row = i;
            break;
        }
    }
    if(row==-1) return 0;
    l=0,r=g-1;
    while(l<=r){
        int m=l+(r-l)/2;
        if(A[row][m]==B) return 1;
        if(A[row][m]<B) l=m+1;
        else r=m-1;
    }
    return 0;
}