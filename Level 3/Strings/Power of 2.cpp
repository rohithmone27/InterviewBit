int Solution::power(string A) {
    long long int n = A.size(), i=0, k=0;
    while(i < n){
        k = k*10 + (A[i]-'0');
        i++;
    }
    if(k==1) return 0;
    long long int p =k-1;
    if((p & k) ==0) return 1;
    return 0;
}