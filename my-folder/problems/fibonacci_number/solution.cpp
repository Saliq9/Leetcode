class Solution {
public:
    int fib(int n) {
	if(n <= 1) // base condition
		return n;
	return fib(n - 1) + fib(n - 2); 
}
};