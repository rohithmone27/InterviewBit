stack<TreeNode *> s;
void solve(TreeNode *A){
    while(A){
        s.push(A);
        A=A->left;
    }
}
BSTIterator::BSTIterator(TreeNode *root) {
    while(root){
        s.push(root);
        root=root->left;
    }
}
  
bool BSTIterator::hasNext() {
   return !s.empty();
 
}
 
int BSTIterator::next() {
    TreeNode *t = s.top();
    s.pop();
    BSTIterator(t->right);
    return t->val;
}