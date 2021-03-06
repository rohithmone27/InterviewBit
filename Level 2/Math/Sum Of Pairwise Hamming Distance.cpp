int Solution::hammingDistance(const vector<int> &A) {
    long long int ans=0;
    long long int n = A.size(), c;
    for(int i=0; i<32; i++){
        c=0;
        for(int j=0; j<n; j++){
            if(A[j] & (1<<i)){
                c++;
            }
        }
        ans=(ans+c*(n-c)*2)%1000000007;
    }
    return ans;
}
