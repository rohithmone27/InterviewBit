int Solution::maxProduct(const vector<int> &A) {
    if(A.size()==0) return 0;
    int mx = A[0], mi = A[0], res = A[0];
    for(int i=1; i<A.size(); i++){
        if(A[i] < 0) swap(mx, mi);
        mx = max(A[i], mx*A[i]);
        mi = min(A[i], mi*A[i]);
        res = max(res, mx);
    }
    return res;
}