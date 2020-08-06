string Solution::addBinary(string A, string B) {
    int i = A.size() - 1, j = B.size() - 1, s=0, c;
    string result = "";
    while(i>=0 || j>=0 || s==1){
        s += ((i >= 0)? A[i] - '0': 0); 
        s += ((j >= 0)? B[j] - '0': 0); 
        result = char(s % 2 + '0') + result;
        s/=2;
        i--; j--;
    }
    return result;
}