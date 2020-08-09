#define vcc vector<vector<int>>
#define vc vector<int>
#define loop(i,j,k) for(int i=j;i<k;i++)
#define pb(x) push_back(x)
#define pr pair<int,int>
#define mk(x,y) make_pair(x,y)
int bfs(int s,vcc &graph,bool flag){
    vector<bool> visit(graph.size(), false);
    queue<pr> q;
    q.push(mk(s, 0));
    int a, b, d;
    visit[s] = true;
    while(!q.empty()){
        pr t = q.front();
        q.pop();
        a = t.first;
        b = t.second;
        d = 0;
        loop(i, 0, graph[a].size()){
            if(!visit[graph[a][i]]){
                visit[graph[a][i]] = true;
                q.push(mk(graph[a][i], b+1));
            }
        }
    }
    if(flag) return b;
    return a;
    
}
void create_graph(vc &A,int n,vcc &graph){
   loop(i,0,n){
       if(A[i]!= -1){
           graph[i].pb(A[i]); 
           graph[A[i]].pb(i);
       }
   }  
}
int Solution::solve(vector<int> &A) {
    int n=A.size(); 
    vcc graph(A.size());
    create_graph(A,n,graph);
    return bfs(bfs(0,graph,false),graph,true);
}