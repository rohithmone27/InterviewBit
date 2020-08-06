int Solution::threeSumClosest(vector<int> &A, int B) {
    int n = A.size(), i=0, t, d, mind=INT_MAX, sum;
    if(A.size() < 3){
        return 0;
    }
    sort(A.begin(), A.end());
    while(i<n-2){
        int j=i+1, k=n-1;
        while(j<k){
            t=A[i]+A[j]+A[k];
            int d=abs(t-B);
            if(d==0) return t;
            if(d<mind){
                mind=d;
                sum=t;
            } 
            if(t<B) j++;
            else k--;
        }
        i++;
    }
    return sum;
}