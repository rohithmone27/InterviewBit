int Solution::singleNumber(const vector<int> &A) {
    int temp = 0;                 
    for (auto i=0; i<A.size(); ++i){
        temp ^= A[i];
    }
    return temp;
}