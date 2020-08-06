#define ll long long int
int ifPossible(vector <int> A, int B, long long int m)
   {
       ll i,sum=0,student=1;
    for(i=0;i<A.size();i++)
    {
        if(A[i]>m) return false;
        if(A[i]+sum>m)
        {
            student++;
            sum=A[i];
            if(student>B)
                return false;
        }
        else
            sum+=A[i];
    }
    return true;    
   }
 
int Solution::paint(int A, int B, vector<int> &C) {
    ll n=C.size(),i,result, sum=0;
    for(i=0;i<n;i++)
      {
          sum+=C[i];
      }
    ll start=0,end=sum,mid,reult=end;
    while(start<=end)
      {
          mid=(start+end)/2;
          if(ifPossible(C,A,mid))
            {
              
              result=mid%10000003;
              end=mid-1;
            }
           else
            {
                start=mid+1;
            }
          
      }
    return (result*B%10000003)%10000003;
}