int Solution::solve(vector<int> &A) {
    int r = INT_MIN;
    stack<int> s;
    for(int i=0; i<A.size(); i++){
        if(A[i] < r) return 0;
        while(!s.empty() && A[i]>s.top()){
            r = s.top();
            s.pop();
        }
        s.push(A[i]);
    }
    return 1;
}