class Solution {
public:
       int minimumTotal(vector<vector<int>>& t)
       {
        for(int i = t.size()-1; i > 0; i--)
        for(int j =0; j < t[i].size() -1; j++)
        t[i-1][j] = t[i-1][j] + min(t[i][j], t[i][j+1]);
        return t[0][0];
    }
};