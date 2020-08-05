bool mycomp(Interval a,Interval b){
     return a.start<b.start;
 }
vector<Interval> Solution::insert(vector<Interval> &A, Interval newInterval) {
    int n = A.size();
    A.push_back(newInterval);
    sort(A.begin(), A.end(),mycomp);
    vector<Interval> b;
    b.push_back(A[0]);
    for(int i=0; i<A.size(); i++){
        if(b[b.size()-1].end >= A[i].start){
            b[b.size()-1].end = max(b[b.size()-1].end, A[i].end);
        }
        else{
            b.push_back(A[i]);
        }
    }
    return b;
}
