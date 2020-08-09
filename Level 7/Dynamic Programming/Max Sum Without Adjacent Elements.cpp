int Solution::adjacent(vector<vector<int> > &A) {
    int n = A.size();
    if(n == 0) return 0;
    int temp, in, out = 0;
    in = max(A[0][0],A[1][0]);
    for(int i=1; i<A[0].size(); i++){
        temp = max(in, out);
        in = out + max(A[0][i], A[1][i]);
        out = temp;
    }
    return max(in, out);
}