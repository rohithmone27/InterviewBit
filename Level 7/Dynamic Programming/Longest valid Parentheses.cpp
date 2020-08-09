int Solution::longestValidParentheses(string A) {
    int n = A.size(), i=0, res = 0;
    stack<int> s;
    s.push(-1);
    while(i < n){
        if(A[i] == '(') s.push(i);
        else{
            s.pop();
            if(!s.empty()) res = max(res, i-s.top());
            else s.push(i);
        }
        i++;
    }
    return res;
}
