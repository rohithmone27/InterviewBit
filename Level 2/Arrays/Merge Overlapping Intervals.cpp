bool comp(Interval A, Interval B){
    return A.start < B.start;
}
vector<Interval> Solution::merge(vector<Interval> &A) {
    sort(A.begin(), A.end(), comp);
    vector<Interval> b;
    int n = A.size();
    b.push_back(A[0]);
    for(int i=1; i<n; i++){
        if(A[i].start<= b[b.size()-1].end){
            b[b.size()-1].end = max(b[b.size()-1].end, A[i].end);
        }
        else{
            b.push_back(A[i]);
        }
    }
    return b;
}
