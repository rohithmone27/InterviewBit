string Solution::longestCommonPrefix(vector<string> &A) {
    string ans=A[0];
    string output="";
    for(int i=1;i<A.size();i++){
        for(int j=0;j<A[i].size() && ans.size();j++){
            if(ans[j]==A[i][j]){
                output+=ans[j];
            }
            else{
                break;
            }
        }
        ans=output;
        output="";
    }
    return ans;
}