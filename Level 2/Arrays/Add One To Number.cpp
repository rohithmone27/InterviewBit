vector<int> Solution::plusOne(vector<int> &A) {
    int n=A.size(),carry=0;
    vector<int>res;
    res.push_back((1+A[n-1])%10);
    carry=(1+A[n-1])/10;
    for(int i=n-2;i>=0;i--){
        res.push_back((carry+A[i])%10);
        carry=(carry+A[i])/10;
    }
    if(carry)
     res.push_back(carry);
    int x=res.size();
    reverse(res.begin(), res.end());
    while(res[0]==0){
       res.erase(res.begin());
    }
    return res;
}
