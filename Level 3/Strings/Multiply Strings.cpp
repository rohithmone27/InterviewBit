string Solution::multiply(string A, string B) {
    int l1= A.size(), l2=B.size() ;
    string str(l1+l2,'0');
    for(int i = l1-1; i >= 0; i--){
        for(int j = l2-1; j >= 0; j--){
                int p = (A[i]-'0')*(B[j]-'0') + (str[i+j+1]-'0');
                str[i+j+1] = p%10 + '0';
                str[i+j] += p/10;
        }
    }
    for(int i = 0; i < l1+l2; i++){
            if(str[i] != '0')
                return str.substr(i);
    }
    return "0";
}