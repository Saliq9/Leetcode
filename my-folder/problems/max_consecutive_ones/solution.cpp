class Solution {
public:
    int count=0,res=0;
    int findMaxConsecutiveOnes(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                count++;
            }
            else{
                count=0;
            }
            res=max(res,count);
        }
        return res;
    }
};