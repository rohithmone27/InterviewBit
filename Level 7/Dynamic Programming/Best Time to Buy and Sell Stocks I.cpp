int Solution::maxProfit(const vector<int> &A) {
    if(A.size() == 0) return 0;
    int minimum = A[0], res = 0;
    for(int i=1; i<A.size(); i++){
        res = max(res, A[i] - minimum);
        minimum = min(A[i], minimum);
    }
    return res;
}