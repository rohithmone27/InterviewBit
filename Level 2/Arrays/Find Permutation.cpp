vector<int> Solution::findPerm(const string A, int B) {
    vector<int > b;
    int min=1, max=B;
    for(int i=B-2; i>=0; i--){
        if(A[i]=='I'){
            b.push_back(max--);
        }
        else if (A[i]=='D'){
            b.push_back(min++);
        }
    }
    b.push_back(max);
    reverse(b.begin(), b.end());
    return b;
}
