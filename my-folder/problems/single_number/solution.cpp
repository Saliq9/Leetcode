class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int single_num = nums.at(0);
        for (int i = 1; i < nums.size(); i++) {
            single_num = single_num ^ nums.at(i);
        }
        return single_num;
    }
};