class Solution {
public:
    vector<int> majorityElement(vector<int>& nums)
    {
        sort(nums.begin(),nums.end());
        
        vector<int>ans;
        int k=1;
        int n=nums.size();
        for(int i=1;i<n;i++)
        {
            if(nums[i]==nums[i-1])
            {
               k++;
            }
         else  if(nums[i]!=nums[i-1])
            {
                if(k>n/3)
                    ans.push_back(nums[i-1]);
             k=1;
            }
        }
        if(k>n/3)
            ans.push_back(nums[n-1]);
      return ans;
    }
};