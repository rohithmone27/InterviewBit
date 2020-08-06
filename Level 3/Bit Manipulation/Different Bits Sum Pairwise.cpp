int Solution::cntBits(vector<int> &A) {
    long long int sum=0, i,j,count, n=A.size();
    for(i=0;i<32;i++)
       {   count=0;
           for(j=0;j<n;j++)
               {
                   if(A[j]&(1<<i))
                      count++;
               }
            sum=(sum+count*(n-count)*2)%1000000007;
       }
       return sum%1000000007;
}