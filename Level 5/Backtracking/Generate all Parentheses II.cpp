void solve(vector<string>& res, string s, int n, int op, int cl)
{
    if (cl == n)
    {
        res.push_back(s);
        return;
    }
    else
    {
        if (op < n)
        { 
            s += '(';
            solve(res, s, n, op+1, cl);
            s.pop_back();
        }
        if (op > cl)
        {
            s += ')';
            solve(res, s, n, op, cl+1);
            s.pop_back();
        }
    }
}
 
vector<string> Solution::generateParenthesis(int A) {
    vector<string> res;
    if(A > 0) solve(res, "", A, 0, 0);
    return res;
}