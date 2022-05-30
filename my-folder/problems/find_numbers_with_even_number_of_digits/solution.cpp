class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int total=0;
        for (int i=0;i< nums.size();i++){
            int count=0,n=nums[i];
            while(n>0){
                count+=1;
                n=n/10;
            }
            if (count%2==0) total+=1;
        }
        return total;
    }
};