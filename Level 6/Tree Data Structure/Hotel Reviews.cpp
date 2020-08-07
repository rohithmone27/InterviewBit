class Trie
{
    public:
    Trie *child[26];
    bool isEnd;
    
    Trie()
    {
        int i;
        for(i=0;i<26;i++)this->child[i]=NULL;
        this->isEnd=0;
    }
    void insert(string word)
    {
        int i,pos;
        Trie *tp;
        tp=this;
        for(i=0;i<word.size();i++)
        {
            pos=word[i]-'a';
            if(tp->child[pos]==NULL)tp->child[pos]=new Trie;
            tp=tp->child[pos];
        }
        tp->isEnd=1;
    }
    bool isThere(string word)
    {
        int i,pos;
        Trie *tp=this;
        for(i=0;i<word.size();i++)
        {
            pos=word[i]-'a';
            if(tp->child[pos])tp=tp->child[pos];
            else return 0;
        }
        return (tp!=NULL and tp->isEnd);
    }
};
 
 
 
vector<int> Solution::solve(string s, vector<string> &reviews) {
    
    string good="";
     vector<int> anss;
    Trie *root=new Trie;
    int i,j;
    for(i=0;i<reviews.size();i++)
    {
        anss.push_back(i);
    }
    for(i=0;i<s.size();i++)
    {
        if(s[i]!='_')
        {
            good.push_back(s[i]);
        }
        else
        {
            root->insert(good);
            good="";
        }
    }
    root->insert(good);
    vector<pair<int,int> > ans;
    int cnt=0;
    for(i=0;i<reviews.size();i++)
    {
        string tp="";
        cnt=0;
        
        for(j=0;j<reviews[i].size();j++)
        {
            if(reviews[i][j]!='_')
        {
            tp.push_back(reviews[i][j]);
        }
        else
        {
           if(root->isThere(tp))cnt++;
            tp="";
        }
        
        }
        if(root->isThere(tp))cnt++;
        ans.push_back(make_pair(-cnt,i));
    }
    sort(ans.begin(),ans.end());
    for(i=0;i<ans.size();i++)
    {
        
        anss[i]=ans[i].second;
    }
    return anss;
}