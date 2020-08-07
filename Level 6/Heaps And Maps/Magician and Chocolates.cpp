#define mod 1000000007
int solve(priority_queue<int> q, int A){
    int ans = 0;
    while(A){
        int t = q.top();
        ans = (ans%mod + t%mod ) % mod;
        q.pop();
        q.push(t/2);
        A--;
    }
    return ans;
}
int Solution::nchoc(int A, vector<int> &B) {
    priority_queue<int> q;
    if(B.size()==0) return 0;
    for(int i=0; i<B.size(); i++) q.push(B[i]);
    return solve(q, A);
}