ListNode* Solution::reverseList(ListNode* A, int B) {
    ListNode *pre=NULL, *curr=A, *next=NULL;
    int c = 0 ;
    while(curr!=NULL && c<B){
        next = curr->next;
        curr->next = pre;
        pre = curr;
        curr = next;
        c++;
    }
    if(next){
        A->next = reverseList(next, B);
    }
    return pre;
}