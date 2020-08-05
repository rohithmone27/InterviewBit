vector<int> Solution::primesum(int A) {
    int temp;
    vector<bool>arr(A+1,0);
    vector<int>inans(2);
    arr[0]=1;
    arr[1]=1;
    for(int i=2;i*i<=A;i++)
    {
        if(arr[i]==0)
        {
            for(int j=i*i;j<=A;j+=i)
            {
                arr[j]=1;
            }
        }
    }
    for(int i=2;i<=A/2;i++)
    {
        if(arr[i]==0 && arr[A-i]==0) {
            inans[0]=i;
            inans[1]=A-i;
            return inans;
        }
    } 
}  
