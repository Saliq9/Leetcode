class Solution {
public:
   	vector<int> prisonAfterNDays(vector<int>& cells, int n)
    {
        int i,j;
        vector<vector<int>> a;
        for(i=0;i<n;i++)
        {
            vector<int> t(8,0);
            
            for(j=1;j<7;j++)
            {
                if(cells[j-1]==cells[j+1])
                    t[j]=1;
            }
            
            if(i!=0 && t==a[0])
                return a[(n-1)%a.size()];
            else
                a.push_back(t);
            
            cells=t;
        }
        
        return cells;
    }
};