int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int ans = 0;
    for(int i=0; i<A.size()-1; i++){
        int d1 = abs(A[i]-A[i+1]);
        int d2 = abs(B[i]-B[i+1]);
        int d =  max(d1, d2);
        ans+= d;
    }
    return ans;
}
