int Solution::solve(vector<vector<int> > &A) {
    int n = A.size();
    int s[n], e[n];
    for(int i=0; i<n; i++){
        s[i] = A[i][0];
        e[i] = A[i][1];
    }
    int i=0, j = 0, res = 0;
    sort(s, s+n);
    sort(e, e+n);
    while(i < n && j<n){
        if(s[i] < e[j]) i++;
        else if(s[i] > e[j]) j++;
        else{
            i++;
            j++;
        }
        res=max(res, i-j);
    }
    return res;
}