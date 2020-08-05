int Solution::maxSubArray(const vector<int> &A) {
    int b = INT_MIN, s = 0;
    for(int i=0; i<A.size(); i++){
        s = max(A[i], A[i]+s);
        b = max(b,s);
    }
    return b;
}
