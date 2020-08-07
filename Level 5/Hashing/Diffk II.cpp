int Solution::diffPossible(const vector<int> &A, int B) {
    unordered_map<int, int> m;
    for(int i=0; i<A.size(); i++){
        if(m.find(A[i]) == m.end()){
            m[A[i]] = 1;
        }
        else{
            m[A[i]] = 2;
        }
    }
    for(auto it = m.begin(); it!=m.end(); it++){
        int d = (it->first)-B;
        if(m.find(d)!=m.end()){
            if(m.find(d) != it) return 1;
            if(it->second > 1) return 1;
        }
    }
    return 0;
}