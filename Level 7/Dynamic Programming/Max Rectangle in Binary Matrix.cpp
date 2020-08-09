
int solve(vector<int> &A, int n){
    stack<int> s;
    int i = 0, area = 0,res = 0, t;
    while(i < n){
        if(s.empty() || A[i] >= A[s.top()]) s.push(i++);
        else{
            t = A[s.top()];
            s.pop();
            area = t * (s.empty() ? i : i - s.top() -1) ;
            res = max(res, area);
        }
    }
    while(!s.empty()){
        t = A[s.top()];
        s.pop();
        area = t * (s.empty() ? i : i - s.top() -1) ;
        res = max(res, area);
    }
    return res;
}
 
int Solution::maximalRectangle(vector<vector<int> > &A) {
    int m = A.size(), n = A[0].size();
    int res = solve(A[0], n);
    for(int i=1; i<m; i++){
        for(int j=0; j<n; j++){
            if(A[i][j]) A[i][j] += A[i-1][j];
        }
        res = max(res, solve(A[i], n));
    }
    return res;
}