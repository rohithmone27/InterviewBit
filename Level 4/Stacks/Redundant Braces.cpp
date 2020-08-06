int Solution::braces(string A) {
    stack<char> s;
    for(int i=0; i<A.size(); i++){
        if(A[i]==')'){
            if(s.top()=='(') return 1;
            else{
                while(!s.empty() && s.top()!='(') s.pop();
                s.pop();
            }
        }
        else if(A[i] == '(' || A[i] == '+' || A[i] == '*' || A[i] == '-' || A[i] == '/'){
            s.push(A[i]);
        }
    }
    return 0;
}