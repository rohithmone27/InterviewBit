int Solution::singleNumber(const vector<int> &A) {
    int n=A.size(),sum=0;
    int i,j;
    for(j=0;j<32;j++)
       {
           int count=0;
           for(i=0;i<n;i++)
               {
                   if(A[i]&(1<<j))
                     count++;
               }
            if((count%3)!=0) 
              sum= sum +(1<<j);
       }
    return sum;   
}