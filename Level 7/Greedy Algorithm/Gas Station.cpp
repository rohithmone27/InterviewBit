int Solution::canCompleteCircuit(const vector<int> &A, const vector<int> &B) {
    int sa=0, sb=0, f=0, g=0;
    for(int i=0; i<A.size(); i++){
        sa+=A[i];
        sb+=B[i];
        f+=(A[i]-B[i]);
        if(f<0){
            g = i + 1;
            f = 0;
        }
    }
    if(sa<sb) return -1;
    return g;
}