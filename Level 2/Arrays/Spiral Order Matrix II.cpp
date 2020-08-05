vector<vector<int> > Solution::generateMatrix(int A) {
    int n=A;
    vector<vector<int> >a(n,vector<int>(n));
    
    int l=0, t=0, r=n-1, b= n-1, d=0, count=1;
    while(t<=b&&l<=r){
        if(d==0){
            for(int i=l;i<=r;i++){
                a[t][i]=count;
                count++;
            }
            t++;
        }
        if(d==1){
            for(int i=t;i<=b;i++){
                a[i][r]=count;
                count++;
            }
            r--;
        }
        if(d==2){
            for(int i=r;i>=l;i--){
                a[b][i]=count;
                count++;
            }
            b--;
        }
        if(d==3){
            for(int i=b;i>=t;i--){
                a[i][l]=count;
                count++;
            }
            l++;
        }
        d=(d+1)%4;
    }
    return a;
}
