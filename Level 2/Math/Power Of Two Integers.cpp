int Solution::isPower(int A) 
{
    if(A==1)
        return 1;
    int i;
    for(i=2;i*i<=A;i++)
    {
        int c=log(A)/log(i);
        if(pow(i,c)==A)
            return 1;
    }
    return 0;
}
