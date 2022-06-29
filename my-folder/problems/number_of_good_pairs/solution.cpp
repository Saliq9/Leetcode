class Solution {
public:
    int numIdenticalPairs(vector<int>& nums)
    {
        int n = nums.size();
        int cnt = 0;
        map<int, int> mp;
        for(int i=0; i<n; i++) 
        {
            cnt = cnt + mp[nums[i]];
            mp[nums[i]]++;
        }
        return cnt;
    }
};