int Solution::removeElement(vector<int> &A, int B) {
     int i = 0, n = A.size();
    for (int j = 0; j < n; j++) {
        if (A[j] != B) {
            A[i] = A[j];
            i++;
        }
    }
    while(i<n){
        A.pop_back();
        i++;
    }
    return A.size();
}