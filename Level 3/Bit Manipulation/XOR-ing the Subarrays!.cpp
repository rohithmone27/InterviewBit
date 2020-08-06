int Solution::solve(vector<int> &A) {
    int n = A.size();
    int res = 0;
    if(n%2==0) return 0;
    for(int i=0; i<n; i+=2){
        res ^= A[i];
    }
    return res;
}