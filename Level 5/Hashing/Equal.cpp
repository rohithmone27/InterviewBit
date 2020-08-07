vector<int> Solution::equal(vector<int> &A) {
    vector<int> res;
    map<int, pair<int, int> > m;
    for(int i=0; i<A.size(); i++){
        for(int j=i+1; j<A.size(); j++){
            int sum = A[i] + A[j];
            if(m.find(sum) == m.end()){
                m[sum] = make_pair(i, j);
            }
            else{
                pair<int, int> p = m[sum];
                if(p.first<i && p.second!=i && p.second!=j){
                    vector<int> t = {p.first, p.second, i, j};
                    if(res.size()==0) res = t;
                    else{
                        for(int i=0; i<res.size(); i++){
                            if(t[i] < res[i]){
                                res = t;
                                break;
                            } 
                            else if(t[i] > res[i]){
                                break;
                            }
                        }
                    }
                }
            }
        }
    }
    return res;
}