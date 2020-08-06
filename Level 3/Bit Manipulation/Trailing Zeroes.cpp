int Solution::solve(int A) {
    if(A%2==1){
    	return 0;
    }
    int c =0;
    while(A%2==0){
        if(A%2==0) c++;
        A /= 2;
    }
    return c;
}