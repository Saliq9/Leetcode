class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums)
    {
        vector<int> v;
        int maxi;
        for(int i=0;i<nums.size();i++)
        {
            maxi=0;
            for(int j=0;j<nums.size();j++)
            {
                if(j != i and nums[j] < nums[i])
                    maxi++;
            }
            v.push_back(maxi);
        }
        return v;
    }
};