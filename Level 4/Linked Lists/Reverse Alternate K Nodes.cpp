ListNode* Solution::solve(ListNode* A, int B) {
    ListNode *curr=A, *prev, *next, *tail, *join, *res = NULL;
    int t;
    while(curr){
        t  = B;
        prev = NULL;
        join = curr;
        while(curr && t--){
            next = curr->next; 
            curr->next = prev; 
            prev = curr; 
            curr = next; 
        }
        if(!res) res = prev;
        if(tail) tail->next = prev;
        tail = join;
        tail->next = curr;
        t  = B;
        while(curr && t--){
            prev = curr;
            curr = curr->next;
        }
        tail = prev;
    }
    return res;
}