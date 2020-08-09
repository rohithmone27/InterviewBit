#define ll long long
#define mod 10000003
int Solution::seats(string A) {
    vector<ll > s;
    for(ll i=0; i<A.size(); i++){
        if(A[i]=='x') s.push_back(i);
    }
    ll n = s.size(), res=0, m = n/2, j=1;
    for(int i=m-1;i>=0; i--){
        res = ( (res)%mod +(s[m]-s[i]-j)%mod ) % mod;
        j++;
    }
    j=1;
    for(int i=m+1;i<n; i++){
        res = ( (res)%mod +(s[i]-s[m]-j)%mod ) % mod;
        j++;
    }
    return res;
}