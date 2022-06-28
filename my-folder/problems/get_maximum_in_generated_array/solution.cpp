class Solution {
public:
    
    int getMaximumGenerated(int n) {
        int t[101]={0};
        t[0] = 0; t[1] = 1;
        if(n==0) 
            return 0;
        
        int ans=1;
        for(int i=2; i<=n; ++i)
        {
            if(i&1) t[i] = t[i/2] + t[i/2+1];
            else t[i] = t[i/2];
            ans = max(ans,t[i]);
        }
        return ans;
    }
};