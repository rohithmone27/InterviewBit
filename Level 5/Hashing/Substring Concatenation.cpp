×
vector<int> Solution::findSubstring(string A, const vector<string> &B) {
    int f = A.size(), n = B.size(), k = B[0].size(), g = n*k, j;
    vector<int> res;
    if(f < g) return res;
    unordered_map<string, int> m;
    for(auto i:B){
        m[i]++;
    }
    for(int i=0; i<=f-g; i++){
        string s = A.substr(i, g);
        unordered_map<string, int> d;
        for(j=0; j<s.size(); j+=k){
            d[s.substr(j,k)]++;
        }
        if(m==d) res.push_back(i);
    }
    return res;
}