int Solution::solve(string A, string B, vector<string> &C) {
    unordered_map<string, bool> mp;
    unordered_map<string, int> mp2;
    for(int i=0; i<C.size(); i++) mp[C[i]] = false;
    mp[B] = false;
    queue<string> q;
    q.push(A);
    mp[A] = true;
    while(!q.empty()){
        string k = q.front();
        q.pop();
        for(int i=0; i<k.size(); i++){
            string dummy = k;
            for(int j='a'; j<='z'; j++){
                dummy[i] = j;
                if(mp.find(dummy) != mp.end() && !mp[dummy]){
                    mp[dummy] = true;
                    q.push(dummy);
                    mp2[dummy] = mp2[k] + 1;
                }
            }
        }
    }
    return mp2[B] + 1;
}