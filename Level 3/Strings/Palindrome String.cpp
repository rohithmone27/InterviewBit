int Solution::isPalindrome(string A) {
    int n = A.size(), l=0, r=n-1;
    while(l<=r){
        if(!isalnum(A[l]) || !isalnum(A[r])){
            if(!isalnum(A[l])) l++;
            else r--;
        }
        else{
            if(tolower(A[l]) == tolower(A[r])){
                l++; 
                r--;
            }
            else return 0;
        }
    }
    return 1;
}