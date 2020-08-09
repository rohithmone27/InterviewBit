#define mod 1000000007
int Solution::solve(int A) {
    int n = A;
    int a[n + 1], B[n + 1]; 
    a[0] = 1, a[1] = 0, B[0] = 0, B[1] = 1; 
    for (int i = 2; i <= n; i++) { 
        a[i] = ( a[i - 2]%mod + 2 * B[i - 1]%mod ) %mod; 
        B[i] = ( a[i - 1]%mod + B[i - 2]%mod ) %mod; 
    } 
    return a[n];
}