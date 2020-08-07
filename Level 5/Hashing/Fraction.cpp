string Solution::fractionToDecimal(int A, int B) {
    long n = long(A);
    long d = long(B);
    string s="";
    if(!n) return "0";
    if(n<0 ^ d<0){
        s+='-';
    }
    n = abs(n);
    d = abs(d);
    s+=to_string(n/d);
    long r = n%d;
    if(!r) return s;
    s+='.';
    map<long, long> m;
    r*=10;
    while(r){
        if(m.find(r)!=m.end()){
            s.insert(m[r], 1, '(');
            s+=')';
            break;
        }
        long q = r/d;
        m[r] = s.size();
        s+=to_string(q);
        r = (r%d)*10;
    }
    return s;
}