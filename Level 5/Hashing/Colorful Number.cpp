vector<int> solve(int A){
    vector <int> d;
    while(A){
        int r = A%10;
        d.push_back(r);
        A/=10;
    }
    if(d.size()==0) d.push_back(0);
    reverse(d.begin(), d.end());
    return d;
}
int Solution::colorful(int A) {
    vector <int> d = solve(A);
    int n = d.size(), val;
    unordered_map <int, bool> doll;
    for(int i=0; i<n; i++){
        val = 1;
        for(int j=i; j<n; j++){
            val*=d[j];
            if(doll[val]) return 0;
            doll[val] = true;
        }
    }
    return 1;
}