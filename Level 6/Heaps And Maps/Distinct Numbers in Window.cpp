vector<int> Solution::dNums(vector<int> &A, int B) {
    map <int, int> m;
    vector<int> res;
    int dc=0;
    for(int i=0; i<B; i++){
        if(m[A[i]]==0) dc++;
        m[A[i]]+=1;
    }
    res.push_back(dc);
    for(int i=B; i<A.size(); i++){
        if(m[A[i-B]]==1) dc--;
        m[A[i-B]]--;
        if(m[A[i]]==0) dc++;
        m[A[i]]++;
        res.push_back(dc);
    }
    return res;
}