int Solution::mice(vector<int> &A, vector<int> &B) {
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    int res = abs(A[0] - B[0]);
    for(int i=1; i<A.size(); i++){
        res = max(res, abs(A[i]-B[i]));
    }
    return res;
}