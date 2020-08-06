int Solution::solve(string A) {
    int n = A.size() ,m=1;
    if(n==0) return 0;
    for(int i=1; i<n; i++){
        int s=0, e=i, p=1;
        while(s<e){
            if(A[s]!=A[e]){
                p=0;
                break;
            }
            s++;
            e--;
        }
        if(p==1) m=i+1;
    }
    return n-m;
}