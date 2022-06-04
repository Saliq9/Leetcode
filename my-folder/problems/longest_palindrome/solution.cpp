class Solution {
public:
    int longestPalindrome(string s) 
    {
       int arr[300]={0};
        for(int i=0;i<s.size();i++)
        {
            arr[s[i]-'0']++;
        }
        int ans=0;bool odd=0;
        for(int i=0;i<300;i++)
        {
            if (arr[i]!=0 and arr[i]%2==0) 
                ans+=arr[i];
            else if(arr[i]%2!=0 and arr[i]>1) 
                ans=ans+arr[i]-1;
            if(arr[i]%2 != 0)     
                odd=true;
        }
        if (odd)
            return ans+1;  
        return ans;      
    }
};