class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int temp = nums[nums.size()-1];
        int count = 1;
        for(int i=nums.size()-2;i>=0;i--){
            if(temp>nums[i]){
                count++;
                temp = nums[i];
            }
            if(count==3)
                return temp;
        }
        return nums[nums.size()-1];
    }
};