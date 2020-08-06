ListNode* Solution::deleteDuplicates(ListNode* A) {
    ListNode *dummy = new ListNode(0), *pre, *p=A;
    dummy->next = A;
    pre = dummy;
    while(p){
        while(p->next && p->val==p->next->val) p = p ->next;
        if(pre->next == p) pre = pre->next;
        else pre->next = p->next;
        p = p->next;
    }
    return dummy->next;
}
