int Solution::maxProfit(const vector<int> &A) {
    int res = 0;
    for(int i=1; i<A.size(); i++){
        if(A[i] > A[i-1])
        res += (A[i] - A[i-1]);
    }
    return res;
}