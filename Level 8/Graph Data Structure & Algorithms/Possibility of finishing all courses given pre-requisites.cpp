bool cycle(int d, vector<bool> vis, vector<bool> onp, vector<int> s[]){
    if(vis[d]==false) vis[d] = true;
    onp[d] = true; 
    for(auto a: s[d]){
        if(!vis[a] && cycle(a, vis, onp, s)) return true;
        else if(onp[a]) return true;
    }
    onp[d] = false;
    return false;
}
int Solution::solve(int A, vector<int> &B, vector<int> &C) {
    vector<bool> vis(A, false);
    vector<bool> onp(A, false);
    vector<int> s[A];
    for(int i=0; i<B.size(); i++) s[B[i]-1].push_back(C[i]-1);
    for(int i=0; i<A; i++){
        if(cycle(i, vis, onp, s)) return 0;
    }
    return 1;
}