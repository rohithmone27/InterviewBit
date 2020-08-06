ListNode* Solution::addTwoNumbers(ListNode* A, ListNode* B) {
    if(!A) return B;
    if(!B) return A;
    ListNode *start, *temp, *g;
    int s, c=0;
    s = A->val + B->val + c;
    g = new ListNode(s%10);
    c = s/10;
    start = g;
    A = A->next;
    B = B->next;
    while(A || B || c){
        s = (A?A->val:0) + (B?B->val:0) + c;
        temp = new ListNode(s%10);
        g->next = temp;
        g = g->next;
        c = s/10;
        if(A) A = A->next;
        if(B) B = B->next;
    }
    return start;
}