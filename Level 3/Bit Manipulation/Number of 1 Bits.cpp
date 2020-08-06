int Solution::numSetBits(unsigned int A) {
    int r,count=0;
    while(A>0)
    {
        r=A%2;
        A=A/2;
        if(r==1) count++;
    }
    return count;        
}