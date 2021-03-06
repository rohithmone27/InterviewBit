vector<int> Solution::getRow(int A) {
    vector <int > b(A+1);
    if(A==0){
        b[0]=1;
        return b;
    }
    int c=1;
    b[0]=c;
    b[A]=c;
    for(int j=1; j<A; j++){
        b[j]=c*(A-j+1)/j;
        c=b[j];
    }
    return b;
}
