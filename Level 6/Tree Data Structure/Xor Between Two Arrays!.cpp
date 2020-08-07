struct tri{
  int leaf=0;
  tri*next[2];
  tri(){
      next[0]=next[1]=NULL;
  }
};
int Solution::solve(vector<int> &A, vector<int> &B) {
 tri*head=new tri();
 for(int i=0;i<A.size();i++){
     tri*temp=head;
     for(int j=31;j>=0;j--){
         int x=(A[i]>>j)&1;
         if(temp->next[x]==NULL)
         temp->next[x]=new tri();
         temp=temp->next[x];
     }
     temp->leaf=i;
 }  int ans=0;
 for(int i=0;i<B.size();i++){
       tri *temp=head; int xo=0;
       for(int j=31;j>=0;j--){
           int x=(B[i]>>j)&1;
           if(temp->next[x^1]!=NULL){
               temp=temp->next[x^1];
               xo|=(1<<j);
           }
           else{
               temp=temp->next[x];
           }
       }
       ans=max(ans,xo);
 }
 return ans;   
}