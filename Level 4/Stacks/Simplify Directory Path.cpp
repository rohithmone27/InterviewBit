string Solution::simplifyPath(string A) {
    stack<string> s;
    string dir, res;
    for(int i=0; i<A.size(); i++){
        dir.clear();
        while(A[i]=='/') i++;
        while(i<A.size() && A[i]!='/'){
            dir.push_back(A[i]);
            i++;
        }
        if(dir.compare("..")==0){
            if(!s.empty())
            s.pop();
        }
        else if(dir.compare(".") == 0){
            continue;
        }
        else if(dir.size()!=0){
            s.push(dir);
        }
    }
    stack <string> f;
    while(!s.empty()){
        f.push(s.top());
        s.pop();
    }
    res.append("/");
    while(!f.empty()){
        string j = f.top();
        if(f.size()!=1){
            res.append(j+"/");
        }
        else{
            res.append(j);
        }
        f.pop();
    }
    return res;
}