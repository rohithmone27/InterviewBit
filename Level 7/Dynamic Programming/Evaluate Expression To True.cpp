int Solution::cnttrue(string A) {
 
vector<char> expr;
vector<char> oper;
 
for(int i=0;i<A.size();i++)
{
    if(A[i]=='T' || A[i]=='F')
    {
        expr.push_back(A[i]);
    }
    else
    {
        oper.push_back(A[i]);
    }
}
 
vector<vector<long long int>> T(expr.size(),(vector<long long int>(expr.size(),0)));
vector<vector<long long int>> F(expr.size(),(vector<long long int>(expr.size(),0)));
int n = expr.size();
 
for(int i=0;i<n;i++)
{
 if(expr[i]=='T')
 {
     T[i][i]= 1;
     F[i][i]= 0;
 }
 
 if(expr[i]=='F')
 {
     T[i][i] =0;
     F[i][i] = 1;
 }
}
 
for(int l=1;l<n;l++)
{
    int i=0;
    int j = i+l;
    while(i<n && j<n)
    {
        for(int k=i;k<j;k++)
        {
            long long int tik = T[i][k]+F[i][k];
            long long int tkj = T[k+1][j]+F[k+1][j];
            
             if (oper[k] == '&') 
            { 
                T[i][j] += (T[i][k]*T[k+1][j])%1003; 
                F[i][j] += (tik*tkj - T[i][k]*T[k+1][j])%1003; 
            } 
            if (oper[k] == '|') 
            { 
                F[i][j] += (F[i][k]*F[k+1][j])%1003; 
                T[i][j] += (tik*tkj - F[i][k]*F[k+1][j])%1003; 
            } 
            if (oper[k] == '^') 
            { 
                T[i][j] += (F[i][k]*T[k+1][j] + T[i][k]*F[k+1][j])%1003; 
                F[i][j] += (T[i][k]*T[k+1][j] + F[i][k]*F[k+1][j])%1003; 
            } 
        }
        i++;
        j++;
    }
}
return T[0][n-1]%1003;
}