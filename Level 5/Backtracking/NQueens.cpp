bool isdiagsafe(vector<string> &curr, int index, int n, int row)
{
    for(int i=0; i<row; i++)
    {
        if(curr[i][index] == 'Q') return false;
    }
    for(int i=row,j=index; i>-1 && j>-1; i--,j--)
    {
        if(curr[i][j] == 'Q')  return false;
    }
    for(int i=row,j=index; i>-1 && j<n; i--,j++)
    {
        if(curr[i][j] == 'Q') return false;
    }
    return true;
}
 
void build(vector<vector<string>> &ans, int n, vector<string> &curr, int row)
{
    if(row == n)
    {
        ans.push_back(curr);
        return;
    }
 
    for(int i=0; i<n; i++)
    {
        if(curr[row][i] == '.' && isdiagsafe(curr,i,n,row))
        {
            curr[row][i] = 'Q';
            build(ans,n,curr,row+1);
            curr[row][i] = '.';
        }
    }
}
vector<vector<string> > Solution::solveNQueens(int a) {
    vector<vector<string>> ans;
    vector<string> curr;
    for(int i=0; i<a; i++)
    {
        string s(a,'.');
        curr.push_back(s);
    }
    build(ans,a,curr,0);
    return ans;
}