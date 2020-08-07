string Solution::minWindow(string A, string B) {
    int str[256]={0}, pat[256]={0};
    int m = A.size(), n = B.size(), st=-1, s=0, c=0, minlen=INT_MAX;
    string res="";
    if(m < n) return res;
    for(int i=0; i<n; i++) pat[B[i]]++;
    for(int i=0; i<m; i++){
        if(pat[A[i]]==0) continue;
        str[A[i]]++;
        //cout << str[A[i]] << " " << A[i] << endl;
        if(str[A[i]] <= pat[A[i]]) c++;
        if(c==n){
            while(str[A[s]] > pat[A[s]] || pat[A[s]]==0){
                if( str[A[s]] > pat[A[s]] ) str[A[s]]--;
                s++;
            }
            if(i-s+1 < minlen){
                minlen = i-s+1;
                res.clear();
                res.append(A.begin()+s, A.begin()+i+1);
            }
        }
    }
    return res;
}