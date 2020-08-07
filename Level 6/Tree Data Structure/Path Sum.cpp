int Solution::hasPathSum(TreeNode* A, int B) {
    TreeNode* root = A;
    int sum = B;
    if (root == NULL) return false;
    if (root->left == NULL && root->right == NULL) {
	return sum == root->val;
    }
    int remainingSum = sum - root->val;
    return hasPathSum(root->left, remainingSum) || hasPathSum(root->right, remainingSum);
}