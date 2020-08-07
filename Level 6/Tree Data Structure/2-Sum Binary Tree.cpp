int Solution::t2Sum(TreeNode* A, int B) {
    if(!A) return 0;
    stack<TreeNode *>s1, s2;
    TreeNode *a=A, *b=A;
    while(a){
        s1.push(a);
        a = a->left;
    }
    while(b){
        s2.push(b);
        b = b->right;
    }
    a = s1.top();
    b = s2.top();
    while(a && b && a->val < b->val){
        if(a->val + b->val == B) return 1;
        else if(a->val + b->val < B){
            s1.pop();
            a = a->right;
            while(a){
                s1.push(a);
                a = a->left;
            }
            a = s1.top();
        }
        else{
            s2.pop();
            b = b->left;
            while(b){
                s2.push(b);
                b = b->right;
            }
            b = s2.top();
        }
    }
    return 0;
}