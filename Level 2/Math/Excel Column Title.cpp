string Solution::convertToTitle(int A) {
    string ans="";
    int n = A;
    while(n){
        int rem=n%26;
        if(rem){
            char c=rem-1+'A';
            ans+=c;
            n=n/26;
        }
        else{
            ans+='Z';
            n=n/26-1;
        }
    }
    int k = ans.length();
    for (int i = 0; i < k / 2; i++) 
        swap(ans[i], ans[k - i - 1]);
    return ans;
}
