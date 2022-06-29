class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix)
    {
        int m=matrix.size(),n=matrix[0].size();
        
        vector<int> row(m,-1),col(n,-1);
        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(matrix[i][j]==0)
                {
                    row[i]=0;
                    col[j]=0;
                }
            }
        }
        int i=0;
        while(i<m || i<n)
        {
            if(i<m && row[i]==0)
            {
                for(int j=0;j<n;j++)
                {
                    matrix[i][j]=0;
                }
            }
            if(i<n && col[i]==0)
            {
                for(int j=0;j<m;j++)
                {
                    matrix[j][i]=0;
                }
            }
            i++;
        }
    }
};