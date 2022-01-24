class Solution {
public:
    int findDuplicate(vector<int>& nums)
    {
        set<int> d;  
        d.insert(nums[0]);
        for(int i=1; i<nums.size(); i++)
        {  
            if(d.count(nums[i]))
            {
                return nums[i];
            }
            d.insert(nums[i]); 
        }
        return-1;
    }
};