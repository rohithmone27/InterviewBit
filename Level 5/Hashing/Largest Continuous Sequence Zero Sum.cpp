vector<int> Solution::lszero(vector<int> &A) {
    vector<int > res;
    unordered_map<int, int>  m;
    m.insert({0, -1});
    int sum=0, ml=INT_MIN, s=-1, l=-1;
    for(int i=0;  i<A.size(); i++){
        sum+=A[i];
        if(m.find(sum)!=m.end()){
            if(i - m[sum] > ml){
                ml = i - m[sum];
                s = m[sum] + 1;
                l = i;
            }
        }
        else{
            m.insert({sum, i});
        }
    }
    if(s>=0 && l>=0){
        for(int i=s; i<=l; i++) res.push_back(A[i]);
    }
    return res;
}