void swapWith(int num, vector<int>& A, int i){
    int min = A[i];
    int j = i, index = i;
    for(j = i; j < A.size(); j++){
        if(min > A[j] && A[j] > A[num]){
            index = j;
            min = A[j];
        }
    }
    swap(A[index], A[num]);
}
 
bool myFun(int i, int j){
    return i > j;
}
 
vector<int >Solution::nextPermutation(vector<int> &A) {
    if(A.size() == 0 || A.size() == 1){
        return A;
    }
    int flag = 0;   
    for(int i = A.size()-1; i > 0; i--){
        if(A[i] > A[i-1]){
            swapWith(i-1, A, i);
            sort(A.begin()+i, A.end());
            flag = 1;
            break;
        }
    }
    if(flag == 0){
        sort(A.begin(), A.end());
    }
    return A;
}
