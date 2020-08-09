×
int Solution::longestSubsequenceLength(const vector<int> &A) {
    int n = A.size();
    vector<int>l(n, 1), r(n, 1);
    for(int i=1; i<n; i++){
        for(int j=0; j<i; j++){
            if(A[i] > A[j]) l[i] = max(l[i], l[j]+1);
        }
    }
    for(int i=n-2; i>=0; i--){
        for(int j=n-1; j>i; j--){
            if(A[i] > A[j]) r[i] = max(r[i], r[j]+1);
        }
    }
    int res = 0;
    for(int i=0; i<n; i++){
        res = max(res, l[i]+r[i]-1);
    }
    return res;
}