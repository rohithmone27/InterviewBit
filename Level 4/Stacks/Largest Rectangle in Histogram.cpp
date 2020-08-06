int Solution::largestRectangleArea(vector<int> &A) {
    stack <int > s;
    int ma=0, at, t, n = A.size(), i=0;
    while(i<n){
        if(s.empty() || A[i]>=A[s.top()]){
            s.push(i++);
        }
        else{
            t = s.top();
            s.pop();
            at = A[t]*(s.empty()?i:i-s.top()-1);
            if(at > ma) ma = at;
        }
    }
    while(!s.empty()){
        t = s.top();
        s.pop();
        at = A[t]*(s.empty()?i:i-s.top()-1);
        if(at > ma) ma = at;
    }
    return ma;
}