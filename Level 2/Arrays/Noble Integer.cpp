int Solution::solve(vector<int> &A) {
    sort(A.begin(), A.end());
    for(int i=0; i<A.size(); i++){
        if(i<A.size()-1 && A[i+1]==A[i]){
            continue;
        }
        if(A.size()-1-i == A[i]) return 1;
    }
    return -1;
}
