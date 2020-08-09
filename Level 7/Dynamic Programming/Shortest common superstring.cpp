int find(string s1,string s2, string &res)
{
	int max=INT_MIN,l1=s1.length(),l2=s2.length();
	for(int i=1;i<=min(l1,l2);i++)
	{
		if(s1.compare(l1-i,i,s2,0,i)==0) 
		{
			if(max<i)
			{
				max=i;
				res=s1+s2.substr(i);
			}
		}
		if(s1.compare(0,i,s2,l2-i,i)==0) 
		{
			if(max<=i)
			{
				max=i;
				res=s2+s1.substr(i);
			}
		}
	}
	return max;
}
int Solution::solve(vector<string> &A) {
    int n = A.size();
    while(n!=1){
        int max = INT_MIN;
        int l, r;
        string resStr; 
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                string str;
                int res = find(A[i], A[j], str);
                if(max < res){
                    max = res;
                    resStr = str;
                    l = i; 
                    r = j;
                }
            }
        }
        n--;
        if(max == INT_MIN){
            A[0] += A[n];
        }
        else{
            A.erase(A.begin()+l);
            A.insert(A.begin(),resStr);
            A.erase(A.begin()+r);
        }
    }
    return A[0].size();
}