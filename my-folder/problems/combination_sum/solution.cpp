class Solution {
public:

    void Sum(vector<int>& c, int target, vector<vector<int> >& res, vector<int>& r, int i)
    {        
        if(target == 0)
        {
            res.push_back(r);
            return;
        }
        
        while(i <  c.size() && target - c[i] >= 0)
        {
            r.push_back(c[i]);
            Sum(c,target - c[i],res,r,i);
            ++i;
            r.pop_back();
        }
}
    
     
    vector<vector<int>> combinationSum(vector<int>& c, int target) {
        sort(c.begin(),c.end());
        c.erase(unique(c.begin(),c.end()),c.end());
        
        vector<int> r;
        vector<vector<int> > res;
        Sum(c,target,res,r,0);
           return res;
    }
};