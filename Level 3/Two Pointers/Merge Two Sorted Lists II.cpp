void Solution::merge(vector<int> &A, vector<int> &B) {
     vector <int> C;
    int m=A.size();
    int n=B.size();
    int i=0,j=0;
            while(j<n&&i<m)
               {
                   if(A[i]<=B[j])
                     {  
                        C.push_back(A[i]); 
                        i++;
                     } 
                   else if(A[i]>B[j])
                     {
                         C.push_back(B[j]);
                         j++;
                     } 
                     
               }
        
            while(i<m)
             {
                 C.push_back(A[i]);
                 i++;
             }
    
            while(j<n)
             {
                 C.push_back(B[j]);
                 j++;
             }
       
     for(i=0;i<m;i++)
        {
           A[i]=C[i];
        }
      for(i=m;i<(m+n);i++)
         {
            A.push_back(C[i]);
         }
}