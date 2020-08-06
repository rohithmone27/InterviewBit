int Solution::trap(const vector<int> &A) {
    int res=0, l=0, r=A.size()-1, lh=0, rh=0;
    while(l < r){
        if(A[l] < A[r]){
            if(A[l] > lh) lh =  A[l];
            else res += (lh-A[l]);
            l++;
        }
        else{
            if(A[r] > rh) rh =  A[r];
            else res += (rh-A[r]);
            r--;
        }
    }
    return res;
}