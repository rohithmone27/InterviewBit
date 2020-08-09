int find(int i, int j, vector<string> &A, int m, int n){
    int X[8]={0,-1,-1,-1,0,1,1,1};
    int Y[8]={1,1,0,-1,-1,-1,0,1};
    int c = 0;
    for(int k=0; k<8; k++){
        int x = i;
        int y = j;
        while(x>=0 && x<m && y>=0 && y<n){
            x += X[k];
            y += Y[k];
            if(x>=0 && x<m && y>=0 && y<n && A[x][y]=='1'){
                c++;
                break;
            }
        }
    }
    return c;
    
}
 
vector<vector<int> > Solution::queenAttack(vector<string> &A) {
    int m = A.size(), n = A[0].size();
    if(!m || !n) return {};
    vector<vector<int>> res(m, vector<int>(n));
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            res[i][j] = find(i, j, A, m, n);
        }
    }
    return res;
}