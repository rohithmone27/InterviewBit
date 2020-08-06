string pass(string s, int c1, int c2) {
  int l = c1, r = c2;
  int n = s.length();
  while (l >= 0 && r <= n-1 && s[l] == s[r]) {
    l--;
    r++;
  }
  return s.substr(l+1, r-l-1);
}
string Solution::longestPalindrome(string A) {
    int n=A.size();
    if(n==0) return 0;
    string res=A.substr(0,1);
    for(int i=0; i<n-1; i++){
        string gfg=pass(A,i, i);
        if(gfg.size() > res.size()) res=gfg;
        string gfg2=pass(A, i, i+1);
        if(gfg2.size() > res.size()) res=gfg2;
    }
    return res;
}