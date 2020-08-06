ListNode* Solution::deleteDuplicates(ListNode* A) {
    ListNode *p = A, *q;
    while(p->next){
        q = p->next;
        while(p->val == q->val){
            if(q->next == NULL){
                p->next = NULL;
                return A;
            }
            q = q->next;
        }
        p->next = q;
        p = q;
    }
    return A;
}