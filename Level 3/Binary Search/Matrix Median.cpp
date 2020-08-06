int Solution::findMedian(vector<vector<int> > &A) {
    int r = A.size(), c = A[0].size(), s = (r*c+1)/2;
    int mn = INT_MAX, mx = INT_MIN;
    for(int i=0; i<r; i++){
        mn = min(mn, A[i][0]);
        mx = max(mx, A[i][c-1]);
    }
    while(mn < mx){
        int m=mn+(mx-mn)/2;
        int c=0;
        for(int i=0; i<r; i++){
            c+=upper_bound(A[i].begin(),A[i].end(),m)-A[i].begin();
        }
        if(c<s) mn = m+1;
        else mx = m;
    }
    return mn;
}