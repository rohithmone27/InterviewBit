string Solution::multiple(int n) {
    
queue<int>q;
vector<bool>visited(n);vector<int>parent(n);
vector<bool>digit(n);
int rem=1%n;
visited[rem]=1;
parent[rem]=-1;
digit[rem]=1;
q.push(rem);
while(!q.empty())
 {
     int curr=q.front();
     q.pop();
     if(curr==0)break;
     int mod0=(curr*10)%n;
     int mod1=(curr*10 + 1)%n;
     if(visited[mod0]==0){
        visited[mod0]=1;
        parent[mod0]=curr;
        digit[mod0]=0;
        q.push(mod0);
     }
 
     if(visited[mod1]==0){
        visited[mod1]=1;
        parent[mod1]=curr;
        digit[mod1]=1;
        q.push(mod1);
     }
 }
 string ans="";
 int i=0;
 while(i != -1){
    ans+=digit[i]+'0';
    i=parent[i];
 }
 reverse(ans.begin(),ans.end());
 return ans;
}