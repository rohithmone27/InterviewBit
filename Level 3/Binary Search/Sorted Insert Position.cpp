int Solution::searchInsert(vector<int> &A, int B) {
    int n = A.size(), l=0, r=n-1;
    while(l<=r){
        int m = (l+r)/2;
        if(A[m]==B || (A[m]>B && A[m-1]<B)) return m;
        else if(A[m]<B) l = m + 1;
        else r = m-1;
    }
    return n;
}