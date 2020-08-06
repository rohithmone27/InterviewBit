int Solution::findMinXor(vector<int> &A) {
    sort(A.begin(), A.end());
    int s = INT_MAX;
    for(int i=0; i<A.size()-1; i++){
        int v = A[i]^A[i+1];
        s = min(s, v);
    }
    return s;
}
