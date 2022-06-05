class Solution{
    public:
    vector<vector<int>> levelOrder(TreeNode* root) {
    
        vector<vector<int>> res;
    if(root==NULL)
        return res;
    queue<TreeNode*> q;
    q.push(root);
        
    while(!q.empty())
    {
        int k=q.size();
        vector<int> temp;
        for(int i=0; i<k; i++)
        {
            TreeNode* p=q.front();
            q.pop();
            temp.push_back(p->val);
            if(p->left)
                q.push(p->left);
            if(p->right)
                q.push(p->right);
        }
        res.push_back(temp);
    }
    return res;
    }
};