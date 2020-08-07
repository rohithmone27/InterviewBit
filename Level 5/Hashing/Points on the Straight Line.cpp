int Solution::maxPoints(vector<int> &A, vector<int> &B) {
    unordered_map<double, int> m;
    int ans=0;
    for(int i=0; i<A.size(); i++){
        int d=0, v=0, cm=0;
        for(int j=i+1; j<A.size(); j++){
            double dx = A[i] - A[j];
            double dy = B[i] - B[j];
            if(dx==0 && dy==0) d++;
            else if(dx==0) v++;
            else{
                m[dy/dx]++;
                cm = max(cm, m[dy/dx]);
            } 
            cm = max(cm, v);
        }
        ans = max(ans, cm+d+1);
        m.clear();
    }
    return ans;
}