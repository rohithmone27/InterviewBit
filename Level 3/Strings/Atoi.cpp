int Solution::atoi(const string A) {
    long long int res=0, sign=1, i=0;
    while(A[i]==' ') {i++;}
    if (A[i] == '-' || A[i] == '+') {
                sign = (A[i++] == '-') ? -1 : 1; 
    }
    while(isdigit(A[i])){
        res = res*10 + (A[i++]-'0');
        if(res > INT_MAX || (res < INT_MIN ))
        {
            if(sign == 1) return INT_MAX;
            else return INT_MIN;
        }
    }
    return sign*res;
}