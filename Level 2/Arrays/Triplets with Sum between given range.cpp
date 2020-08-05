int Solution::solve(vector<string> &A) {
    int n = A.size(), l =0, r = n-1;
    sort(A.begin(),A.end());
    while(l < r-1){
        double t = stod(A[l]) + stod(A[r]) + stod(A[l+1]);
        if(t > 2) r--;
        else if(t < 1) l++;
        else return 1;
    }
    return 0;
}
