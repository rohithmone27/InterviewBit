TreeNode *solve(ListNode *A, ListNode *t){
    if(A == t) return NULL;
    ListNode *s=A, *f = A->next;
    while(f!=t && f->next!=t){
        s = s->next;
        f = f->next->next;
    }
    TreeNode *res = new TreeNode(s->val);
    res->left = solve(A, s);
    res->right = solve(s->next, t);
    return res;
}
TreeNode* Solution::sortedListToBST(ListNode* A) {
    if(!A) return NULL;
    return solve(A, NULL);
}