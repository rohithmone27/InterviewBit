vector<vector<int> > Solution::anagrams(const vector<string> &A) {
    vector<vector<int> > res;
    map< string, vector<int> > m;
    for(int i=0; i<A.size(); i++){
        string f = A[i];
        sort(f.begin(), f.end());
        m[f].push_back(i+1);
    }
    for(auto it : m){
        res.push_back(it.second);
    }
    return res;
}