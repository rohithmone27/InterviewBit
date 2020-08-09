int Solution::bulbs(vector<int> &A) {
    int n = A.size();
    int count = 0,state = 0;
    for(int i = 0;i<n;i++)
    {
        if(A[i] == state)
        {
            state = 1-state;
            count++;
        }
    }
    return count;
}