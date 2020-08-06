int Solution::minimize(const vector<int> &A, const vector<int> &B, const vector<int> &C) {
    int i=0, j=0, k=0, p=A.size(), q=B.size(), r=C.size(), d=INT_MAX;
    while(i<p && j<q && k<r){
        int mi = min(A[i], min(B[j], C[k])); 
        int ma = max(A[i], max(B[j], C[k])); 
        if(ma-mi < d){
            d=ma-mi;
        }
        if (d== 0) return d; 
        if(A[i]==mi) i++;
        else if(B[j]==mi) j++;
        else k++;
    }
    return d;
}