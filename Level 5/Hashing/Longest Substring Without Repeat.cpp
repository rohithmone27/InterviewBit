int Solution::lengthOfLongestSubstring(string A) {
    unordered_map<char, int >m;
    int s=0, maxlen=0, currlen=0;
    for(int i=0; i<A.size(); ){
        if(m.find(A[i]) == m.end()){
            m[A[i]] = i;
            currlen++;
            i++;
        }
        else{
            i = m[A[i]]+1;
            m.clear();
            maxlen = max(maxlen, currlen);
            currlen = 0;
        }
    }
    maxlen = max(maxlen, currlen);
    return maxlen;
}