class Solution {
public:
    vector<int> getRow(int n) 
    {
        if(n==0) 
            return {1};

        vector<int> c = {1}; 
        vector<int> p = getRow(n-1); 

        for(int i=1;i<n;i++){
            c.push_back(p[i-1]+p[i]);
        }

        c.push_back(1);
        return c;
    }
};