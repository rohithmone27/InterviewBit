#define mod 1000003;
int fac(int n){
    return (n==0) ? 1 : (n*fac(n-1))%mod;
}
int Solution::findRank(string A) {
    string s=A ;
    int ans =1;
    int n=s.length();  
    for(int i=0;i<n-1;i++)
    {
        int c=0;
        for(int j=i+1;j<n;j++)
        {
            if(s[j]<s[i])
                c++;
        }   
            ans+=( (c*fac(n-i-1)) )%mod;
    }
    return (ans)%mod;
 
}
