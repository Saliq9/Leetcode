
class Solution {
public:
    bool isPalindrome(string s) {
       int k = 0;
      int   r = s.size()-1;
        while(k < r){
            if(!isalnum(s[k])) 
                k++;
            else if(!isalnum(s[r])) 
                r--;
            else if(tolower(s[k]) != tolower(s[r])) 
                return false;
            else{
                k++; 
                r--;
            }
        }
        return true;
    }
};