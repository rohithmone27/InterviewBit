int find(int t[], int n){
    unordered_map<int, int> m;
    int res = 0, s = 0;
    for(int i=0; i<n; i++){
        s+= t[i];
        if(s==0) res++;
        if(m.find(s) != m.end()) res += m[s];
        m[s]++;
    }
    return res;
}
int Solution::solve(vector<vector<int> > &A) {
    int m = A.size(), n = A[0].size();
    if(m==0) return 0;
    int res = 0;
    for(int i=0; i<n; i++){
        int t[m] = {0};
        for(int j=i; j<n; j++){
            for(int k=0; k<m; k++){
                t[k] += A[k][j];
            }
            res += find(t, m);
        }
    }
    return res;
}