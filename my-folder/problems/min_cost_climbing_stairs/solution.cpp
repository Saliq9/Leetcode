class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        int m[n];
        m[0]=cost[0];
        m[1]=cost[1];
        
        for(int i=2;i<n;i++)
        {
            m[i]=cost[i]+min(m[i-1],m[i-2]);
        }
        return min(m[n-1],m[n-2]);
    }
};