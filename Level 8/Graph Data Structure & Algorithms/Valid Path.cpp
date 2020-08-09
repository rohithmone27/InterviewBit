int X[] = {0, 0, -1, 1, -1, 1, -1, 1};
int Y[] = {1, -1, -1, 1, 0, 0, 1, -1};
string Solution::solve(int A, int B, int C, int D, vector<int> &E, vector<int> &F) {
    vector<vector<int>> rec(A+1, vector<int>(B+1, 0));
    for(int i=0; i<=A; i++){
        for(int j=0; j<=B; j++){
            for(int k=0; k<C; k++){
                if(sqrt( pow(E[k]-i,2) + pow(F[k]-j,2) ) <= D){
                    rec[i][j] = 1;
                    break;
                }
            }
        }
    }
    if(rec[0][0]==1||rec[A][B]==1)return "NO";
    queue<pair<int, int>> q;
    q.push({0, 0});
    rec[0][0]=1;
    while(!q.empty())
    {
        int x=q.front().first;
        int y=q.front().second;
        q.pop();
        if(x==A && y==B)return "YES";
        for(int i=0;i<8;i++)
        {
            int m = x+X[i];
            int n = y+Y[i];
            if(m>=0 && m<=A && n>=0 && n<=B && rec[m][n]==0)
            {
                q.push({m, n});
                rec[m][n]=1;
            }
        }
    }
    return "NO";
}