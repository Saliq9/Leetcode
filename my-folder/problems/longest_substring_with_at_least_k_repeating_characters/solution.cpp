class Solution {
public:
 
int longestSubstring(string s, int k) 
    {
        if(k==1)
        {
            return s.size();
        }
    
        int ans=0;
        for(int i=0;i+k<=s.size();i++)
        {
            int c=0,a[26]={0};
            for(int j=i;j<s.size();j++)
            {
                if(a[s[j]-'a']==0 )
                    c++;
                a[s[j]-'a']++;
                if(a[s[j]-'a']==k)
                    c--;
                if(c==0)
                ans=max(ans,j-i+1);  
            }
        }
        return ans;
    }
};