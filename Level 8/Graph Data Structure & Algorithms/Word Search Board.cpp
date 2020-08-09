int l, m, n;
int x[] = {0, 0, -1, 1};
int y[] = {-1, 1, 0, 0};
bool solve(vector<string> &A, string B, int a, int b, int index){
    if(index == l) return 1;
    for(int i=0; i<4; i++){
        int f = a+x[i];
        int g = b+y[i];
        if(f>=0 && f<m && g>=0 && g<n && A[f][g] == B[index]){
            if(solve(A, B, f, g, index+1)) return true;
        }
    }
    return false;
    
}
int Solution::exist(vector<string> &A, string B) {
    m = A.size();
    n = A[0].size();
    l = B.size();
    if(l==0) return 1;
    bool res = false;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(A[i][j] == B[0]){
                res |= solve(A, B, i, j, 1) ;
                if(res) return 1;
            } 
        }
    }
    return 0;
}