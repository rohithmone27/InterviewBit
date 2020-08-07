vector<int> Solution::solve(vector<int> &A, int B) {
    priority_queue<int> p;
    for(int i=0; i<A.size(); i++){
        p.push(A[i]);
    }
    vector<int> res;
    while(B--){
        int k = p.top();
        p.pop();
        res.push_back(k);
    }
    return res;
}