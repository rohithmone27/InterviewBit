int Solution::removeDuplicates(vector<int> &A) {
    int j=0, n=A.size();
    if(n==1) return 1;
    for(int i=0; i<n; i++){
        if(A[i]==A[i+1] && A[i]==A[i+2] && i<n-2) continue;
        else A[j++]=A[i];
    }
    return j;
}