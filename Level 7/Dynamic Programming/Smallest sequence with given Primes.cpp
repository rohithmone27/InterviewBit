vector<int> Solution::solve(int A, int B, int C, int D) {
    vector<int> res;
    set<int> s;
    s.insert(A);
    s.insert(B);
    s.insert(C);
    int c = 0;
    while(c < D){
        int f = *s.begin();
        s.erase(s.begin());
        res.push_back(f);
        s.insert(f*A);
        s.insert(f*B);
        s.insert(f*C);
        c++;
    }
    return res;
}