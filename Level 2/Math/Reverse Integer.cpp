int Solution::reverse(int A) {
    long long int s=0;
    while(A){
        s = (s*10+(A%10));
        if(s>INT_MAX||s<INT_MIN) return 0;
        A=A/10;
    }
    return s;
}
