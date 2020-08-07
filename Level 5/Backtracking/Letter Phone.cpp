string temp = "";
unordered_map<char, string> m = {
    { '1', "1" },
    { '2', "abc" },
    { '3', "def" },
    { '4', "ghi" },
    { '5', "jkl" },
    { '6', "mno" },
    { '7', "pqrs" },
    { '8', "tuv" },
    { '9', "wxyz" },
    { '0', "0" }
};
void solve(string A, vector<string>& res, int ind)
{
    if (A[ind] - '0' > -1 && A[ind] - '0' < 10)
    {    
        string k = m[A[ind]];
        for (int j = 0; j<k.length(); ++j)
        {
            temp += k[j];
            if(ind == A.length() - 1) res.push_back(temp);
            else solve(A, res, ind+1);
            temp.pop_back();
        }
    }
}
vector<string> Solution::letterCombinations(string A) {
    vector<string> res;
    solve(A, res, 0);
    return res;
}