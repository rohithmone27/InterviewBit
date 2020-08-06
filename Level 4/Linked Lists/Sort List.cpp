ListNode* merge(ListNode* A, ListNode* B){
    if(A == NULL) return B;
    if(B == NULL) return A;
    ListNode *start, *temp;
    if(A->val < B->val){
        start = A;
        A = A->next;
    }
    else{
        start = B;
        B = B->next;
    }
    temp = start;
    while(A && B){
        if(A->val < B->val){
            temp->next = A;
            A = A->next;
        }
        else{
            temp->next = B;
            B = B->next;
        }
        temp = temp->next;
    }
    if(!A) temp->next = B;
    if(!B) temp->next = A;
    return start;
} 
 
ListNode* Solution::sortList(ListNode* A) {
    ListNode *t=A;
    if(t==NULL || t->next==NULL) return A;
    ListNode *start=A, *end=A->next;
    while(end!=NULL && end->next!=NULL){
        start = start->next;
        end = (end->next)->next;
    }
    end = start->next;
    start->next = NULL;
    return merge(sortList(t), sortList(end));
}