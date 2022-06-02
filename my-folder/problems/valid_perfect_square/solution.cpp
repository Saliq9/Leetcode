class Solution {
public:
    bool isPerfectSquare (int num)
    {
        int low=0, high=num;
        while (low <= high)
        {
            int mid = (low+high)/2;
            if (pow(mid,2) > num)
                high = mid-1;
            else if (pow(mid,2) < num)
                low = mid+1;
            else 
				return true;
        }
        return false;
    }
};