bool isvalid(string s) {
    if (s.size() > 1 && s[0]  ==  '0') return false;
    if (stoi(s) <= 255 && stoi(s) >= 0) return true;
    else return false;
}
vector<string> Solution::restoreIpAddresses(string A) {
    vector<string> res;
    if(A.size()>12 || A.size()<4) return res;
    for(int i=1; i<4; i++){
        string f = A.substr(0, i);
        if(!isvalid(f)) continue;
        for(int j=1; j+i<A.size() && j<4; j++){
            string s = A.substr(i, j);
            if(!isvalid(s)) continue;
            for(int k=1; k+j+i<A.size() && k<4; k++){
                string t = A.substr(i+j, k);
                string fo = A.substr(i+j+k);
                if(isvalid(t) && isvalid(fo)){
                    string cur = f + "." + s + "." + t + "." + fo;
                    res.push_back(cur);
                }
            }
        }
    }
    return res;
}