class Solution {
public:
    void solve(int open, int close, string output, vector<string> &ans){
    
        if(open == 0 && close == 0)
        {
            ans.push_back(output);
            return;
        }
        if(open != 0){
            string openOutput = output + "(";
            solve(open-1, close, openOutput, ans);    
        }
        if(close > open){
            string closeOutput = output + ")";
            solve(open, close-1, closeOutput, ans);
        }
    }
    
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        int open = n, close = n;
        string output = "";
        solve(open, close, output, ans);
        return ans;
    }
};