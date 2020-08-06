vector<string> Solution::prettyJSON(string A) {
    vector<string> res;
    if(A.length() == 0) return res;
    A.erase(remove(A.begin(), A.end(), ' '), A.end());
    string cur = "", dummy = "";
    int i, n = A.size();
    while(i < n){
        cur.push_back(A[i]);
        switch(A[i]){
            case ',':
                res.push_back(cur);
                cur = dummy;
                i++;
                break;
            case ':':
                i++;
                if(i<n && (A[i]=='{' || A[i]=='[') ){
                    res.push_back(cur);
                    cur = dummy;
                }
                break;
            case '{':
            case '[':
                i++;
                res.push_back(cur);
                if(i<n && (A[i]!='}' || A[i]!=']') ){
                    dummy.push_back('\t');
                    cur = dummy;
                }
                break;
            case '}':
            case ']':
                i++;
                if (i < n && A[i] == ',') break;
                res.push_back(cur);
                if(i<n && (A[i]!='}' || A[i]!=']') ){
                    if(!dummy.empty()) dummy.pop_back();
                    cur = dummy;
                }
                break;
            default:
                i++;
                if (i < n && (A[i] == '}' || A[i] == ']')) {
                    res.push_back(cur);
                    if (!dummy.empty()) dummy.pop_back();
                    cur = dummy;
                }
        }
    }
    return res;
}