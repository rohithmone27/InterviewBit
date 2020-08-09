int Solution::snakeLadder(vector<vector<int> > &A, vector<vector<int> > &B) {
    unordered_map<int, int> s, l;
    for(int i=0; i<A.size(); i++) s[A[i][0]] = A[i][1];
    for(int i=0; i<B.size(); i++) s[B[i][0]] = B[i][1];
    vector<int> dice = {1, 2, 3, 4, 5, 6};
    int inf = 2e9, st = 1, des = 100;
    vector<int> dis(101, inf);
    queue<int> q;
    dis[st] = 0;
    q.push(st);
    while(!q.empty()){
        int t = q.front(); 
        q.pop();
        for(auto lg : dice){
            int n = t + lg;
            if( s.find(n)!=s.end() ) n = s[n]; 
            else if( l.find(n) != l.end() ) n = l[n];
            if(dis[n] == inf){
                dis[n] = dis[t] + 1;
                q.push(n);
            }
        }
    }
    return dis[des]!=inf ? dis[des] : -1;
}