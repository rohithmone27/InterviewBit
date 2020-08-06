ListNode* Solution::reverseBetween(ListNode* A, int B, int C) {
    int i=1;
    ListNode *t=A, *ini, *curr, *next, *pre, *end, *last;
    while(i < B){
        ini = t;
        t = t->next;
        i++;
    }
    curr = next = t;
    while(i < C){
        t = t->next;
        i++;
    }
    end = t;
    pre = t->next;
    last = t->next;
    while(curr != last){
        next = curr->next;
        curr->next = pre;
        pre = curr;
        curr = next;
    }
    if(B==1) A = pre;
    else ini->next = pre;
    return A;
}