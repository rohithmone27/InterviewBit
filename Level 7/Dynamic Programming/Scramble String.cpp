bool ana( string s1, string s2 )
{
    sort( s1.begin(), s1.end() );
    sort( s2.begin(), s2.end() );
    if( s1 != s2 )
        return false;
    else return true;
}
int Solution::isScramble(const string A, const string B) {
    if(A==B) return true;
    if(!ana(A, B)) return false;
    int res = 0, m = A.length();
    for(int i=1; i<m; i++){
        res = res || (
            (isScramble(A.substr(0, i), B.substr(0, i)) && isScramble(A.substr(i, m-i), B.substr(i, m-i))) ||
            (isScramble(A.substr(0, i), B.substr(m-i, i)) && isScramble(A.substr(i, m-i), B.substr(0, m-i)))
            );
    }
    return res;
}