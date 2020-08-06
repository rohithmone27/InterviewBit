 int length(struct ListNode *start){
    struct ListNode *p=start;
    int l=0;
    while(p!=NULL){
        l++;
        p=p->next;
    }
    return l;
}
int Solution::lPalin(ListNode* A) {
    int l=length(A), len;
    if(l%2==1) len=(l/2)+1;
    else len=l/2;
    struct ListNode *m=A;
    for(int i=0; i<len; i++){
        m=m->next;
    }
    struct ListNode *prev=NULL, *curr=m, *n;
    while(curr!=NULL){
        n=curr->next;
        curr->next=prev;
        prev=curr;
        curr=n;
    }
    struct ListNode *p=A, *q=prev;
    while(p!=NULL&&q!=NULL){
        if(p->val!=q->val)
         return 0;
        p=p->next;
        q=q->next;
    }
    return 1;
}