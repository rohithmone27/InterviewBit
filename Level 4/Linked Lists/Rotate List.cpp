 int length(struct ListNode *start){
    struct ListNode *p=start;
    int l=0;
    while(p!=NULL){
        l++;
        p=p->next;
    }
    return l;
}
 
ListNode* Solution::rotateRight(ListNode* A, int B) {
    int l = length(A), k=B;
    if(k%l==0) return A;
    ListNode *start, *end, *temp=A, *next, *last;
    for(int i=0; i<l-(k%l)-1; i++){
        temp = temp->next;
    }
    next=temp->next;
    temp->next = NULL;
    last = next;
    while(last->next) last = last->next;
    last->next = A;
    A = next;
    return A;
}