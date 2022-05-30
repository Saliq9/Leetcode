class Solution {
public:  
    int maxSubArray(vector<int>& nums) {
        int max_sum = nums[0], sum = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            sum = max(sum + nums[i], nums[i]);
            max_sum = max(max_sum, sum);
        }
        return max_sum;
    }
};