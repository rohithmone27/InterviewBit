vector<int> Solution::solve(vector<int> &A, int B) {
    int n = A.size();
    if(B==0) return A;
    vector<int> st(n);
    for(int i=0; i<n; i++) st[A[i]-1] = i;
    for(int i=0; i<n && B>0; i++){
        if(A[i]==n-i) continue;
        int t = A[i];
        swap(A[i], A[st[n-i-1]]);
        swap(st[t-1], st[n-i-1]);
        B--;
    }
    return A;
}