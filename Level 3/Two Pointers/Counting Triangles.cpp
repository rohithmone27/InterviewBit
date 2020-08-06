#define mod 1000000007
int Solution::nTriang(vector<int> &A) {
    int i, l, r, n = A.size(), c=0;
    sort(A.begin(), A.end());
    for(int i=n-1; i>1; i--){
        l=0, r=i-1;
        while(l<r){
            if(A[l]+A[r] > A[i]){
                c = ( (c%mod) + ((r-l)%mod) ) % mod;
                r--;
            } 
            else l++;
        }
    }
    return c;
}