int Solution::strStr(const string A, const string B) {
    int n = A.size(), m = B.size();
    if(n==0 && m==0) return -1;
    int i=0, j=0, res=i;
    while(i<n && j<m){
        if(A[i]==B[j]){
            i++;
            j++;
        }
        else{
            j=0;
            i=++res;
        }
        if(j==m) return res;
    }
    return -1;
}