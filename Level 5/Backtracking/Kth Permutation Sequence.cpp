int fac(int n){
    if(n > 11) return INT_MAX;
    return n==0 ? 1 : fac(n-1)*n;
}
string solve(int k, vector<int> &store){
    int num = store.size();
    if(num==0 || k>fac(num)) return "";
    int f = fac(num-1);
    int d = k/f;
    k%=f;
    string res = to_string(store[d]);
    store.erase(store.begin()+d);
    return res + solve(k, store);
}
string Solution::getPermutation(int A, int B) {
    vector<int> store;
    for(int i=1; i<A+1; i++) store.push_back(i);
    return solve(B-1, store);
}