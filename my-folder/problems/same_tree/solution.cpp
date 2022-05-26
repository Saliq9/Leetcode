class Solution 
{
public:
    bool isSameTree(TreeNode* p, TreeNode* q) 
    {
        if(p == NULL && q == NULL) return true;
        else if(p == NULL || q == NULL || q->val != p->val) return false;
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
};