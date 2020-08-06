int Solution::removeDuplicates(vector<int> &A) {
    int j=0; 
    for(int i=0; i< A.size()-1; i++){
        if(A[i]!=A[i+1]){
            A[j++]=A[i];
        }
    }
    A[j++]=A[A.size()-1];
    return j;
}
