vector<vector<int> > Solution::threeSum(vector<int> &A) {
    sort(A.begin(), A.end());
    int i, l, r, n = A.size();
    vector<vector<int>> res;
    for(int i=0; i<n-2; i++){
        l=i+1, r=n-1;
        if(i>0 && A[i]==A[i-1]) continue;
        while(l<r){
            int s = A[i] + A[l] + A[r];
            if(s==0){
                vector<int> temp={A[i], A[l], A[r]};
                int s= res.size();
                if(s>0 && res[s-1][0]==temp[0] && res[s-1][1]==temp[1] && res[s-1][2]==temp[2]);
                else res.push_back(temp);
                l++;
                r--;
            }
            else if(s<0) l++;
            else r--;
        }
    }
    return res;
}