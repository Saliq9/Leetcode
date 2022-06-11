class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
            
        return nums[n/2]; // Number occuring more than half the size of array 
    }
};