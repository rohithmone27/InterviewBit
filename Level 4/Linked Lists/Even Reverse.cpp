int length(struct ListNode *start){
    struct ListNode *p=start;
    int l=0;
    while(p!=NULL){
        l++;
        p=p->next;
    }
    return l;
}
ListNode* Solution::solve(ListNode* A) {
    int c1 = 1, l = length(A);
    if(l <= 3) return A;
    vector<int> a;
    ListNode *temp = A, *start = NULL, *d, *res=NULL;
    while(temp && temp->next){
        a.push_back(temp->next->val);
        temp = temp->next->next;
    }
    int k = a.size()-1;
    while(A){
        if(c1%2 == 0){
            start->next = new ListNode(a[k--]);
            start = start->next;
        }
        else{
            if(res == NULL){
                d = new ListNode(A->val);
                start = d;
                res = start;
            }
            else{
                start->next  = new ListNode(A->val);
                start = start->next;
            }
        }
        c1++;
        A = A->next;
    }
    return res;
}