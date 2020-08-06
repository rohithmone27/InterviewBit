vector<int> Solution::intersect(const vector<int> &A, const vector<int> &B) {
    vector<int> res={};
    int i=0, j=0;
    while(i<A.size() && j<B.size()){
        if(A[i]==B[j]){
            res.push_back( A[i]);
            i++;
            j++;
        }
        else if(A[i]<B[j]) i++;
        else j++;
    }
    return res;
}