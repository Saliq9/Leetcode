class Solution {
public:
    bool isBalanced(TreeNode* root)
    {
        if(root == nullptr)
            return true;
        return height(root) != -1;
    }
    
    int height(TreeNode* root)
    {
        if(root == nullptr)
        {
            return 0;
        }
        int lHeight = height(root->left);
        int rHeight = height(root->right);
        
        if(lHeight == -1 || rHeight == -1 || abs(lHeight - rHeight) > 1){
            return -1;
        }
        return 1 + max(lHeight, rHeight);
    }
};