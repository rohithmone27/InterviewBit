int length(struct ListNode *start, int B){
    struct ListNode *p=start;
    int l=0;
    while(p!=NULL){
        if(p->val == B)
        l++;
        p=p->next;
    }
    return l;
}
ListNode* Solution::solve(ListNode* A) {
    int c1 = length(A, 0), c2 = length(A, 1), d = c1, e = c2;
    ListNode *g;
    while(c1){
        if(c1==d){
            d = -5;
            g = A;
        }
        A->val = 0;
        A = A->next;
        c1--;
    }
    while(c2){
        if(d != -5){
            if(e == c2){
                g = A;
            }
        }
        A->val = 1;
        A = A->next;
        c2--;
    }
    return g;
}