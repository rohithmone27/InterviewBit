int Solution::canJump(vector<int> &A) {
    if(A.size() == 0 || A.size() == 1) return 1;
    int res = A.size()-1;
    for(int i=A.size()-2; i>=0; i--){
        bool f=false;
        if(i + A[i] >= res) {
            f = true;
            res = i;
        }
        if(i==0) return f;
    }
    return 1;
}