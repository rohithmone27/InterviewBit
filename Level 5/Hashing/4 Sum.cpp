vector<vector<int> > Solution::fourSum(vector<int> &A, int B) {
    sort(A.begin(), A.end());
    vector< vector<int> > res;
    int n = A.size();
    for(int i=0; i<n-3; i++){
        if(i>0 && A[i]==A[i-1]) continue;
        for(int j=i+1; j<n-2; j++){
            if(j>i+1 && A[j]==A[j-1]) continue;
            int k=j+1, l = n-1;
            while(k<l){
                int sum = A[i] + A[j] + A[k] + A[l];
                if(sum == B){
                    vector<int> temp = {A[i], A[j], A[k], A[l]};
                    res.push_back(temp);
                    k++;
                    while(k<l && A[k]==A[k-1]) k++;
                }
                else if(sum < B) k++;
                else l--;
            }
        }
    }
    return res;
}