int Solution::majorityElement(const vector<int> &A) {
    int c = 1, res = 0;
    for(int i=1; i<A.size(); i++){
        if(A[res] == A[i]) c++;
        else c--;
        if(c == 0){
            res = i;
            c=1;
        }
    }
    return A[res];
}