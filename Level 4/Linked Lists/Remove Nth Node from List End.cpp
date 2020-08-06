 int length(struct ListNode *start){
    struct ListNode *p=start;
    int l=0;
    while(p!=NULL){
        l++;
        p=p->next;
    }
    return l;
}
ListNode* Solution::removeNthFromEnd(ListNode* A, int B) {
    ListNode *p = A, *temp;
    int n = length(A);
    if(B >= n){
        A = A->next;
        return A;
    }
    else{
        int k = n-B-1;
        while(k--) p = p->next;
        if(p->next){
            temp = p->next;
            p->next =  temp->next;
            return A;
        }
    }
    return A;
}