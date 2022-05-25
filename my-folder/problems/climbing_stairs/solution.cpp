class Solution {
public:
    int climbStairs(int n)
    {
        if (n <= 2) return n;
        
        int a = 2, b = 1, res;
        for (int i = 3; i <= n; i++) 
        {
            res = a + b;
            b = a;
            a = res;
        }
        return res;
    }
};