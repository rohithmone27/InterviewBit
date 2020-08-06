string Solution::solve(string A) {
    int count[256] = {0};
    string res;
    queue<char> q;
    for(int i=0; i<A.size(); i++){
        q.push(A[i]);
        count[A[i]]++;
        while(!q.empty()){
            if(count[q.front()] > 1) q.pop();
            else{
                res.push_back(q.front());
                break;
            }
        }
        if(q.empty()) res.push_back('#');
    }
    return res;
}