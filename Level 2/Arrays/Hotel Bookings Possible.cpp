bool Solution::hotel(vector<int> &arrive, vector<int> &depart, int K) {
    int n = arrive.size();
    vector<pair<int, int> >b;
    for(int i=0; i<n; i++){
        b.push_back(make_pair(arrive[i], 1));
        b.push_back(make_pair(depart[i], -1));
    }
    int c=0;
    sort(b.begin(), b.end());
    for(int i=0; i<2*n; i++){
        c+=b[i].second;
        if(c>K) return false;
    }
    return true;
}
