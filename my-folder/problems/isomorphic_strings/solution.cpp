class Solution {
public:
    bool isIsomorphic(string s, string t) {
 
        int len = s.size();
        char check[128] = {};
        for (int i = 0; i < len; i++) 
        {
            char c = s[i];
            if (!check[c]) {
                for (char s: check) 
                    if (s == t[i]) 
                        return false;
                check[c] = t[i];
            }
            else if (check[c] != t[i]) 
                return false;
        }
        return true;
    }
};