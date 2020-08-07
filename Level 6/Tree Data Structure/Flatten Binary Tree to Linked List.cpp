
TreeNode* Solution::flatten(TreeNode* A) 
{
    if(A==NULL)
        return NULL;
    TreeNode *node=A;
    while(node!=NULL)
    {
        if(node->left!=NULL)
        {
            TreeNode *rtmost=node->left;
            while(rtmost->right!=NULL)
                rtmost=rtmost->right;
            rtmost->right=node->right;
            node->right=node->left;
            node->left=NULL;
        }
        node=node->right;
    }
    return A;
}