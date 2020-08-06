string Solution::convert(string A, int B) {
    int row=0, n = A.size();
    if(B==1) return A;
    string a[B], res="";
    bool down;
    for(int i=0; i<n; i++){
        a[row].push_back(A[i]); 
        if (row == B-1) down = false; 
        else if (row == 0)  down = true; 
        (down)? (row++): (row--); 
    }
    for(int i=0; i<B; i++){
        res+=(a[i]);
    }
    return res;
}