int Solution::titleToNumber(string A) {
    int n = A.size(), j=n-1, r=0;
    for(int i=0; i<n; i++){
        int x = A[i]-'A'+1;
        r = r+pow(26, j)*x;
        j--;
    }
    return r;
}
