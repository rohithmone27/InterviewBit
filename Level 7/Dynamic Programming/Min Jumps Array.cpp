int Solution::jump(vector<int> &A) {
    int n = A.size();
    if(n <= 1) return 0;
    int m = A[0], now = A[0], res = 1;
    for(int i=1; i<n-1; i++){
        m = max(i+A[i], m);
        now--;
        if(now < 0) return -1;
        if(now == 0){
            res++;
            now = m - i;
        }
    }
    if(m >= n-1) return res;
    return -1;
}