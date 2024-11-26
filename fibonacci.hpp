void fib(int n, int num = 0, int next_num = 1) {
	if (n > 0) { 
		std::cout << num << ", "; 
		fib(n - 1, next_num, num + next_num);
	} 
}