int Solution::maximumGap(const vector<int> &A) {
    vector <int >B;
    B=A;
    int max=0;
    sort(B.begin(),B.end());
    for(int i=0;i<A.size()-1;i++)
    {
        if((B[i+1]-B[i])>max)
        {
            max=B[i+1]-B[i];
        }
    }
    return max;
}
