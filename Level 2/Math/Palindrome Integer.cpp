int Solution::isPalindrome(int A) {
    if(A<0) return false;
    int x=A;
    int res=0;
    while(x){
        res=res*10+x%10;
        x=x/10;
    }
    if(res==A) return 1;
    return 0;
}
