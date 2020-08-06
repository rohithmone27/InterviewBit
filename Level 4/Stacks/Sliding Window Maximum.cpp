vector<int> Solution::slidingMaximum(const vector<int> &A, int B) {
    vector<int> res;
    deque<int> d;
    for(int i=0; i<A.size(); i++){
        if(!d.empty() && d.front()==i-B) d.pop_front();
        while(!d.empty() && A[i] > A[d.back()]) d.pop_back();
        d.push_back(i);
        if(i>=B-1) res.push_back(A[d.front()]);
    }
    return res;
}