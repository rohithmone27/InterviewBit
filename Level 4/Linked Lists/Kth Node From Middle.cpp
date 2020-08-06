int length(struct ListNode *start){
    struct ListNode *p=start;
    int l=0;
    while(p!=NULL){
        l++;
        p=p->next;
    }
    return l;
}
int Solution::solve(ListNode* A, int B) {
    int n = length(A), k=0;
    int re = (n/2)+1-B;
    if(re <= 0) return -1;
    ListNode *temp = A;
    while(temp && re-1){
        temp = temp->next;
        re--;
    }
    return temp->val;
}