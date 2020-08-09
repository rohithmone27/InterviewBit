vector<vector<string> > res;
int nd, minL;
string en;
 
bool isAdj(string a, string b)
{
    int n = a.length();
    int cnt = 0;
 
    for(int i=0;i<n;i++)
    {
        if(a[i]!=b[i])
            cnt++;
        if(cnt>1)
            return false;
    }
 
    return cnt==1? true : false;
}
 
void dfs(vector<string> &dict, vector<string> &temp, bool vis[], int len)
{
    if(len>minL)
        return;
 
    if(temp[len-1] == en)
    {
        if(minL > len)
        {
            minL = len;
            res.clear();
        }
        res.push_back(temp);
        return;
    }
 
    string s = temp[len-1];
 
    for(int i=0;i<nd;i++)
    {
        if(vis[i] == false && isAdj(s,dict[i]))
        {
            vis[i] = true;
            temp.push_back(dict[i]);
            dfs(dict,temp,vis,len+1);
            temp.pop_back();
            vis[i] = false;
        }
    }
}
 
vector<vector<string> > Solution::findLadders(string start, string end, vector<string> &dict)
{
    res.clear();
    dict.push_back(end);
    unordered_set<string> st;
    for(auto x : dict)
        st.insert(x);
    dict.assign(st.begin(), st.end());
    sort(dict.begin(), dict.end());
    nd = dict.size();
    minL = INT_MAX;
    en = end;
    vector<string> temp;
    bool vis[nd];
    memset(vis,false,sizeof(vis));
    temp.push_back(start);
    dfs(dict,temp,vis,1);
    return res;
}