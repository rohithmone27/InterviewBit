#define ll long long int
int Solution::pow(int x, int n, int d) {
    if (x == 0) return 0;
    if (d == 0) return -1;
    if (n == 0) return 1;
    ll res = 1, y = (x%d);
    while(n>0){
        if(n%2==1){
            res = ((res)*y)%d;
        }
        y = (y*y) % d;
        n/=2;
    }
    if(res<0)
        res=(res+d)%d;
    return res;
}