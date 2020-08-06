#define ll long long int 
int Solution::sqrt(int A) {
    if(A==1) return 1;
    ll l=0, h = A/2, m;
    while(l<=h){
        m = (l+h)/2;
        if(m*m<=A && (m+1)*(m+1)>A) return m;
        else if(m*m>=A) h = m-1;
        else l = m+ 1;
    }
}