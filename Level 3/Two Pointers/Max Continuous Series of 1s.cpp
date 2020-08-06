vector<int> Solution::maxone(vector<int> &A, int B) {
    int n=A.size(), l=0, r=0, c=0, b=0, bl=0;
    vector<int>a;
    while(r<n){
        if(c<=B){
            if(A[r]==0) c++;
            r++;
        }
        if(c>B){
            if(A[l]==0) c--;
            l++;
        } 
        if((r-l)>b){
            b=r-l;
            bl=l;
        }
    }
    for(int i=0; i<b; i++){
        a.push_back(bl+i);
    }
    return a;
}