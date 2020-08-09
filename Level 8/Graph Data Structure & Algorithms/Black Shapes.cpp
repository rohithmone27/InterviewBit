void solve(int i, int j, vector<string> &A){
    if(i<0 || i>=A.size() || j<0 || j>=A[i].size()) return ;
    if(A[i][j]!='X') return ;
    A[i][j]='0';
    solve(i+1, j, A);
    solve(i-1, j, A);
    solve(i, j+1, A);
    solve(i, j-1, A);
}
 
int Solution::black(vector<string> &A) {
    int res=0;
    for(int i=0; i<A.size(); i++){
        for(int j=0; j<A[i].size(); j++){
            if(A[i][j]=='X'){
                solve(i, j, A);
                res++;
            }
        }
    }
    return res;
}