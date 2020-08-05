long long pw(long long a, long long b, long long c){
    long long res = 1LL;
    while(b){
        if(b & 1LL)
            res = (res * a) % c;
        a = (a * a) % c;
        b >>= 1;
    }
    
    return res;
}
 
#define MOD 1000003
long long fact[MOD], invFact[MOD];
 
int Solution::findRank(string A) {
    long long res = 1, tp = 1;
    fact[0] = fact[1] = invFact[0] = invFact[1] = 1;
    for(int i = 2; i <= A.size(); i++){
        fact[i] = (fact[i - 1] * i) % MOD;
        invFact[i] = (invFact[i - 1] * pw(i, MOD - 2LL, MOD)) % MOD;
    }
    
    int f[257] = {};
    vector<char> v;
    for(int i = 0; i < A.size(); i++){
        if(f[A[i]] == 0)
            v.push_back(A[i]);
        f[A[i]] += 1;
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < v.size(); i++)
        tp = (tp * invFact[f[v[i]]]) % MOD;
    for(int i = 0; i < A.size(); i++){
        for(int j = 0; j < v.size() && A[i] != v[j]; j += 1){
            long long tmp = (tp * f[v[j]]) % MOD;
            tmp = (tmp * fact[A.size() - i - 1]) % MOD;
            res = (res + tmp) % MOD;
        }
        tp = (tp * f[A[i]]) % MOD;
        f[A[i]] -= 1;
    }
    
    return res;
}
