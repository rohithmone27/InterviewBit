int Solution::solve(string A) {
    stack<char> s;
    for(int i=0; i<A.size(); i++){
        if(s.empty() || A[i] == '(') s.push(A[i]);
        else if(A[i] == ')'){
            if(s.empty() || !(s.top()=='(')) return 0;
            else s.pop();
        }
    }
    return s.empty() ? 1 : 0;
}