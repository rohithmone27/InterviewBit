void Solution::sortColors(vector<int> &A) {
   int i, j, n = A.size(), k=n-1;
   for(i=0; i<n; i++){
       if(A[i]!=0) break;
   }
   j=i;
   for(; i<=k; i++){
       if(A[i]==0) swap(A[j++], A[i]);
       else if(A[i]==2) swap(A[i--], A[k--]);
   }
}