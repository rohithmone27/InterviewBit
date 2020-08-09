int Solution::fibsum(int A) {
    vector<int> res;
    int a=1, b=1;
    while(a <= A){
        res.push_back(a);
        int t = a+b;
        a = b;
        b = t;
    }
    int c = 0;
    for(int i=res.size()-1; i>=0; i--){
        while(res[i] <= A){
            A -= res[i];
            c++;
        }
        if(A==0) break;
    }
    return c;   
}