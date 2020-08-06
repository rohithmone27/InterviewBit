ListNode* insert(ListNode* s, ListNode* c){
    ListNode* d;
    if(s==NULL || s->val>c->val){
        c->next = s;
        s = c;
    }
    else{
        d = s;
        while(d->next!=NULL && d->next->val < c->val){
            d = d->next;
        }
        c->next = d->next;
        d->next = c;
    }
    return s;
}
ListNode* Solution::insertionSortList(ListNode* A) {
    ListNode *s=NULL, *c=A, *d;
    while(c){
        d = c->next;
        s = insert(s, c);
        c = d;
    }
    A = s;
    return A;
}