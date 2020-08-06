string Solution::solve(string A) {
    int n=A.size(),c;
    reverse(A.begin(), A.end());
    for(int i=0; i<n; i++){
        int f=i, e=0;
        while(A[i]!=' ' && i<n) {
            i++;
        }
        e=i;
        reverse(A.begin()+f, A.begin()+e);
    }
    return A;
}