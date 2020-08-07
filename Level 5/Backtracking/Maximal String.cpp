void solve2(string &A, int B, string &m){
    if(B==0) return ;
    for(int i=0; i<A.size()-1; i++){
        for(int j=i+1; j<A.size(); j++){
            if(A[j] > A[i]){
                swap(A[i], A[j]);
                if(A > m) m = A;
                solve2(A, B-1, m);
                swap(A[i], A[j]);
            } 
        } 
    }
}
 
string Solution::solve(string A, int B) {
    string m = A;
    solve2(A, B, m);
    return m;
}