unsigned int Solution::reverse(unsigned int A) {
    unsigned int res = 0;
    int i=0; 
    while(A){
        res = res + pow(2, 31-i)*(A%2);
        i++;
        A/=2;
    }
    return res;
}