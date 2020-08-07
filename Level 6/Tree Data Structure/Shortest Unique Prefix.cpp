struct Trie
{
    Trie *edges[26];
    int words;
    Trie()
    {
        for (auto i = 0; i<26; ++i)
            edges[i] = NULL;
        words = 0;
    }
};
 
void addToTrie(Trie* head, string s)
{
    int n = s.length();
    Trie *current = head;
    
    for (auto i = 0; i<n; ++i)
    {
        current->words += 1;
        if (!current->edges[s[i]-'a'])
            current->edges[s[i]-'a'] = new Trie();
        current = current->edges[s[i]-'a'];
    }
}
 
string findPrefix(Trie* head, string s)
{
    int n = s.length();
    string prefix = "";
    Trie *current = head;
    int i = 0;
    current = current->edges[s[i]-'a'];
    prefix += s[i];
    
    for (i = 1; i<n; ++i)
    {
        if (current->words == 1)
            return prefix;
        current = current->edges[s[i]-'a'];
        prefix += s[i];
    }
    return prefix;
}
 
vector<string> Solution::prefix(vector<string> &A) {
    vector<string> res;
    if (A.empty())
        return res;
    Trie *head = new Trie();
    
    auto size = A.size();
    for (auto i = 0; i<size; ++i)
        addToTrie(head, A[i]);
        
    for (auto j = 0; j<size; ++j)
        res.emplace_back(findPrefix(head, A[j]));
    
    return res;
}