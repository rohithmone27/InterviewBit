int bin(const vector<int> &A, int B, bool can){
    int res=-1, l=0, r=A.size()-1;
    while(l<=r){
        int m=(l+r)/2;
        if(A[m]==B){
            res = m;
            if(can) r = m-1;
            else l = m+1;
        }
        else if(A[m]>B) r=m-1;
        else l=m+1;
    }
    return res;
}
vector<int> Solution::searchRange(const vector<int> &A, int B) {
    vector <int > b(2);
    b[0]=-1, b[1]=-1;
    if(bin(A, B, true) == -1) return b;
    b[0] = bin(A, B, true);
    b[1] = bin(A, B, false);
    return b;
}