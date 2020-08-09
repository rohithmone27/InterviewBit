int Solution::solve(int A) {
    long long int c3 = 24, c2 = 12, temp = 0;
    for(int i=2; i<=A; i++){
        temp = c3;
        c3 = ( 11*c3 + 10*c2 ) % 1000000007;
        c2 = ( 5*temp + 7*c2 ) % 1000000007;
    }
    return int( (c2+c3) % 1000000007 );
}