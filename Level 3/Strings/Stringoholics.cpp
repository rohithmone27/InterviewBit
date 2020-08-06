#define ll long long int 
#define mod 1000000007
int Solution::solve(vector<string> &A) {
    ll n= A.size(), arr[n];
    for(ll i=0; i<n; i++){
        ll s=1, v=1, l=A[i].size();
        while(s%l!=0){
            v++;
            s+=v;
        }
        arr[i] = v;
    }
    ll res=1;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            arr[j] = arr[j]/__gcd(arr[j], arr[i]);
        }
        res = ((res%mod * arr[i]%mod))%mod;
    }
    return res%mod;
}