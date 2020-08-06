int Solution::maxSpecialProduct(vector<int> &A) {
    long long int n = A.size(), res = 0 ;
    vector<int> l(n, 0), r(n, 0);
    stack<int> le, ri;
    le.push(0);
    l[0] = 0;
    for(int i=1; i<n; i++){
        while(!le.empty()){
            if(A[le.top()] > A[i]) break;
            le.pop();
        }
        l[i] = le.empty() ? 0 : le.top();
        le.push(i);
    }
    le.push(n-1);
    l[0] = n-1;
    for(int i=n-1; i>=0; i--){
        while(!ri.empty()){
            if(A[ri.top()] > A[i]) break;
            ri.pop();
        }
        r[i] = ri.empty() ? 0 : ri.top();
        ri.push(i);
    }
    for(int i=1; i<n; i++){
        res = max(res, l[i]*1LL*r[i]);
    }
    return res%1000000007;
}