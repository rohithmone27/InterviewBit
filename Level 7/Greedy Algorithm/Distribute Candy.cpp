int Solution::candy(vector<int> &A) {
    int res=0;
    vector<int> l(A.size(), 1);
    vector<int> r(A.size(), 1);
    for(int i=1; i<A.size(); i++){
        if(A[i]>A[i-1]) l[i] = l[i-1] + 1;
    }
    for(int i=A.size()-2; i>=0; i--){
        if(A[i]>A[i+1]) r[i] = r[i+1] + 1;
    }
    for(int i=0; i<A.size(); i++){
        res+=max(l[i], r[i]);
    }
    return res;
}