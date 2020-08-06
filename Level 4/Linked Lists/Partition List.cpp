ListNode* Solution::partition(ListNode* A, int B) {
    ListNode *p=NULL, *q=NULL, *t=A, *a=p, *b=q;
    while(t){
        if(t->val < B){
            if(p==NULL){
                p = new ListNode(t->val);
                a = p;
            }
            else{
                a->next = new ListNode(t->val);
                a = a->next;
            }
        }
        else{
            if(q==NULL){
                q = new ListNode(t->val);
                b = q;
            }
            else{
                b->next = new ListNode(t->val);
                b = b->next;
            }
        }
        ListNode *d = t;
        t = t->next;
        free(d);
        A = t;
    }
    if(p == NULL) return q;
    a->next = q;
    return p;
}