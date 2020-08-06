ListNode* Solution::detectCycle(ListNode* A) {
    ListNode* fast=A, *slow=A, *f;
    int c=0;
    while(fast && fast->next){
        fast=fast->next->next;
        slow=slow->next;
        if(fast==slow){
            c=1;
            break;
        }
    }
    if(c==0)return NULL;
    if(c==1){
        f=A;
        while(f!=slow){
            f=f->next;
            slow=slow->next;
        }
    }
    return f;
}