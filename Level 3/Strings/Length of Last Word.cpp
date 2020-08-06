int Solution::lengthOfLastWord(const string A) {
    int n = A.size(), c=0, d=0;
    for(int i=n-1; i>=0; i--){
        if(A[i]==' ' && d==1) return c;
        if(A[i]!=' '){
            c++; d=1;
        }
    }
    return c;
}