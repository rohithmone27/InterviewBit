#define ll long long
#define mod 1000000007
void solve(vector<vector<int>> &graph, ll sum, ll &res, vector<int> &A, int c, int p){
    ll x = A[c-1];
    for(auto t : graph[c]){
        if(t != p){
            solve(graph, sum, res, A, t, c);
            x += A[t-1];
        }
    }
    A[c-1] = x;
    res = max(res, ( (x%mod)*(sum-x)%mod )%mod);
}
int Solution::deleteEdge(vector<int> &A, vector<vector<int> > &B) {
    int n = A.size();
    vector<vector<int>> graph(n+1);
    for(auto t : B){
        graph[t[0]].push_back(t[1]);
        graph[t[1]].push_back(t[0]);
    }
    ll sum = 0, res = 0;
    for(auto t : A) sum += t;
    solve(graph, sum, res, A, 1, 0);
    return res;
}