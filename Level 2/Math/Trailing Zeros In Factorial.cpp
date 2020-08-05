int Solution::trailingZeroes(int A) {
    int c = 0, n=A; 
    for (int i = 5; n / i >= 1; i *= 5) 
        c += n / i; 
    return c;
}
