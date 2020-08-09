UndirectedGraphNode *Solution::cloneGraph(UndirectedGraphNode *node) {
    UndirectedGraphNode *src = node;
    map<UndirectedGraphNode*,UndirectedGraphNode*> my_map;
   queue<UndirectedGraphNode*> Q;
   Q.push(src);
   UndirectedGraphNode *g = new UndirectedGraphNode(src->label);
   my_map[src] = g;
   while(!Q.empty()){
       UndirectedGraphNode* fr = Q.front();
       Q.pop();
       vector<UndirectedGraphNode *> v = fr->neighbors;
       for(int i=0 ; i<v.size() ; i++){
           if(my_map.find(v[i]) == my_map.end()){
               UndirectedGraphNode *temp = new UndirectedGraphNode(v[i]->label);
               my_map[v[i]] = temp;
               Q.push(v[i]);
           }
           my_map[fr]->neighbors.push_back(my_map[v[i]]);
       }
   }
   return my_map[src];
}