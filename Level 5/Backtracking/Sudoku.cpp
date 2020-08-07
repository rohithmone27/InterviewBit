bool safe(vector<vector<char> > &A, int r, int c, int val){
      int d1 = r-r%3, d2 = c-c%3;
    for(int i=0; i<9; i++){
        if(A[r][i] == val) return false;
    }
    for(int i=0; i<9; i++){
        if(A[i][c] == val) return false;
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++)
            if(A[i+d1][j+d2] == val) return false;
    }
    return true;
}
bool solve(vector<vector<char> > &A, int r, int c){
    if(r == 9) return true;
    if(c == 9) return solve(A, r+1, 0);
    if(A[r][c] != '.') return solve(A, r, c+1) ;
    for(char j='1'; j<='9'; j++){
        if(safe(A, r, c, j)){
            A[r][c] = j;
            if(solve(A, r, c+1)) return true;
            A[r][c] = '.';
        }
    }
    return false;
}
void Solution::solveSudoku(vector<vector<char> > &A) {
   bool ans = solve(A, 0, 0);
}