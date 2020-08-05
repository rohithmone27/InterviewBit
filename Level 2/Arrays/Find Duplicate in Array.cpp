int Solution::repeatedNumber(const vector<int> &A) {
    int n = A.size();    
   bool v[n];
   memset(v,false,sizeof(v));
   for(int i = 0;i<A.size();i++){
       if(v[A[i]] == false)
            v[A[i]] = true;
        else
            return A[i];
   }
}
