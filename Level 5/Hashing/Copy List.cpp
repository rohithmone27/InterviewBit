RandomListNode* Solution::copyRandomList(RandomListNode* A) {
    if(!A) return NULL;
    RandomListNode *curr =A, *t;
    while(curr){
        t = curr->next;
        curr->next = new RandomListNode(curr->label);
        curr->next->next = t;
        curr = t;
    }
    curr = A;
    while(curr){
        if(curr->next) curr->next->random = curr->random ? curr->random->next : curr->random;
        curr = curr->next ? curr->next->next : curr->next;
    }
    RandomListNode* t1 = A, *t2 = A->next, *t3 = t2;
    while(t1 && t2){
        t1->next = t1->next ? t1->next->next : t1->next;
        t2->next = t2->next ? t2->next->next : t2->next;
        t1 = t1->next;
        t2 = t2->next;
    }
    return t3;
}