ListNode* Solution::swapPairs(ListNode* A) {
    if(!A) return NULL;
    ListNode *pre=NULL, *p=A, *q=p->next;
    if(q) A=q;
    while(q){
        p->next = q->next;
        q->next = p;
        if(pre) pre->next=q;
        pre = p;
        p = p->next;
        if(p) q=p->next;
        else q=NULL;
    }
    return A;
}