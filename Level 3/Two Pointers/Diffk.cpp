int Solution::diffPossible(vector<int> &A, int B) {
    int i=0, j=0;
    while(i<A.size() && j<A.size()){
        if(A[i]-A[j]==B && i!=j) return 1;
        else if(A[i]-A[j]<B) i++;
        else j++;
    }
    return 0;
}