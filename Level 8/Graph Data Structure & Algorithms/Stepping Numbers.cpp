void solve(int A, int B, int i, vector<int> &res){
    queue<int> q;
    q.push(i);
    while(!q.empty()){
        int f = q.front(), r = f%10;
        q.pop();
        if(f>=A && f<=B) res.push_back(f);
        if(f==0 || f>B) continue;
        int s = f*10+(r-1);
        int e = f*10+(r+1);
        if(r==0) q.push(e);
        else if(r==9) q.push(s);
        else{
            q.push(s);
            q.push(e);
        }
    }
}
vector<int> Solution::stepnum(int A, int B) {
    vector<int> res;
    for(int i=0; i<=9; i++){
        solve(A, B, i, res);
    }
    sort(res.begin(), res.end());
    return res;
}