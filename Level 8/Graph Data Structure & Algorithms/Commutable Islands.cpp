int find(int a, int p[]){
    if(a != p[a]) p[a] = find(p[a], p);
    return p[a];
}
int solve2(int a, int b, int c, int p[], int r[]){
    int x = find(a, p);
    int y = find(b, p);
    if(x==y) return 0;
    if(r[x] > r[y]){
        p[x] = y;
        r[y] += r[x];
    }
    else{
        p[y] = x;
        r[x] += r[y];
    }
     return c;
}
bool comp(vector<int> &a, vector<int> &b)
{
    return a[2] < b[2];
}
int Solution::solve(int A, vector<vector<int> > &B) {
    int res = 0, n = B.size();
    int p[n], r[n];
    for(int i=0; i<A; i++){
        p[i] = i;
        r[i] = 1;
    }
    sort(B.begin(), B.end(), comp);
    for(int i=0; i<B.size(); i++){
        res += solve2(B[i][0]-1, B[i][1]-1, B[i][2], p, r);
    }
    return res;
}