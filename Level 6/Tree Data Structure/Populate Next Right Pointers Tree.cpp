TreeLinkNode *solve(TreeLinkNode *A){
    TreeLinkNode *p = A->next;
    while(p){
        if(p->left) return p->left;
        if(p->right) return p->right;
        p = p->next;
    }
    return NULL;
}
void Solution::connect(TreeLinkNode* A) {
    if(!A) return ;
    A->next = NULL;
    while(A){
        TreeLinkNode *p = A;
        while(p){
            if(p->left){
                if(p->right) p->left->next = p->right;
                else p->left->next = solve(p);
            }
            if(p->right){
                p->right->next = solve(p);
            }
            p = p->next;
        }
        if(A->left) A = A->left;
        else if(A->right) A = A->right;
        else A = solve(A);
    }
}