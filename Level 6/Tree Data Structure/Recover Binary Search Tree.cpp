void inorder(TreeNode *root,TreeNode **pre,TreeNode **first,TreeNode **middle,TreeNode **last)
{
    if(!root)return ;
    inorder(root->left,pre,first,middle,last);
        if(*pre && root->val<(*pre)->val)
        {
              if(!*first){
              *first = *pre;
           * middle = root;
                 }
            else
            {
                *last = root;
                return;
            }    
        }
    *pre = root;
    inorder(root->right,pre,first,middle,last);
}
 
vector<int> Solution::recoverTree(TreeNode* A) {
   struct TreeNode *first, *middle, *last, *prev;
    first = middle = last = prev = NULL;
    inorder(A,&prev,&first,&middle,&last);
    vector<int> x;
   if(first && last){
       x.push_back(first->val);
    x.push_back(last->val);
    sort(x.begin(),x.end());
   }
   else if(first && middle)
   {
        x.push_back(first->val);
    x.push_back(middle->val);
    sort(x.begin(),x.end());
   }
    
    return x;
}