class Solution {
public:
    int addDigits(int num) {
        
        while(num>9)
        {
	    int rem = num%10;
	    num = num/10 + rem;
        }
        return num; 
    }
};