int Solution::solve(vector<int> &A, int B) {
    priority_queue<int> pq;
    int i,j,n,num;
    n=A.size();
    for(i=0;i<n;i++)pq.push(A[i]);
    int ans=0;
    while(B--)
    {
        num=pq.top();
        pq.pop();
        ans+=num;
        if(num>1)
        pq.push(num-1);
    }
    return ans;
}