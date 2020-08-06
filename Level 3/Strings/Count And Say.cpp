string Solution::countAndSay(int A) {
    string r = "";
    if(A==0) return r;
    string s="1";
    while(A>=2){
        int c = 1, n = s.length(), j=0;
        while(j<n){
            if(j+1!=n && s[j]==s[j+1]) c++;
            else{
                r+=to_string(c)+s[j];
                c=1;
            }
            j++;
        }
        s = r;
        r.clear();
        A--;
    }
    return s;
}