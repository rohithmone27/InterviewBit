ListNode* sorted(ListNode* a, ListNode* b) 
{ 
    ListNode* result = NULL; 
    if (a == NULL) return (b); 
    else if(b == NULL) return (a); 
    if(a->val <= b->val) 
    { 
        result = a; 
        result->next = sorted(a->next, b); 
    } 
    else
    { 
        result = b; 
        result->next = sorted(a, b->next); 
    } 
    return result; 
} 
ListNode *solve(vector<ListNode*> &A, int n){
    ListNode *start =A[0];
        for(int i=1; i<=n; i++){
            A[0] = sorted(A[0], A[i]);
            start = A[0];
        }
    return start;
}
ListNode* Solution::mergeKLists(vector<ListNode*> &A) {
    return solve(A, A.size()-1);
}