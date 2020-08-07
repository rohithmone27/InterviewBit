vector<int> Solution::order(vector<int> &A, vector<int> &B) {
    vector<int> res(A.size(), -1);
    map<int, int> m;
    for(int i=0; i<A.size(); i++) m[A[i]] = B[i];
    for(auto t:m){
        int c = -1, j;
        for(j=0; j<A.size(); j++){
            if(res[j] == -1) c++;
            if(c == t.second) break;
        }
        res[j] = t.first;
    }
    return res;
}