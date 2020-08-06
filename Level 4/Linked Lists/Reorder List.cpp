int length(struct ListNode *start){
    struct ListNode *p=start;
    int l=0;
    while(p!=NULL){
        l++;
        p=p->next;
    }
    return l;
}
ListNode* Solution::reorderList(ListNode* A) {
    
    ListNode *prev=A, *curr, *next, *p, *q, *temp=A, *m, *n, *f=A->next;
    while(f && f->next){
       prev = prev->next;
       f = f->next->next;
   }
   temp = prev->next;
    prev->next = NULL;
    prev = NULL;
    curr = temp;
    while(curr){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    p = A;
    q = prev;
    while(p!=NULL && q!=NULL){
        m = p->next;
        n = q->next;
        p->next = q;
        q->next = m;
        p = m;
        q = n;
    }
    return A;
}