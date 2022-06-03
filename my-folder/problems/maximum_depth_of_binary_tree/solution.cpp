class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(!root){
            return 0;
        }
        int m1= maxDepth(root->left), m2=maxDepth(root->right);
        return max(m1, m2)+1;
    }
};