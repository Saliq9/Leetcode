class Solution {
public:
    int nthSuperUglyNumber(int n, vector<int>& primes) {
        set<int> fixed,possible;
        possible.insert(1);
        while(fixed.size()!=n){
            int next=*possible.begin();
            fixed.insert(next);
            possible.erase(next);
            for(int i:primes){
                if(INT_MAX/next<i){
                    continue;
                }
                possible.insert(next*i);
            }
            
        }
        return *fixed.rbegin();
        
    }
};