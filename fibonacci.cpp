#include <stdio.h>
#include <iostream>

int fibo(int num);

int fibo(int num) {
	if(num == 0 || num == 1) {
		return num;
	}
	else {
		return fibo(num - 2) + fibo(num - 1);
	}
}

int main(void) {
	int num;
	std::cout << "num : " << std::endl;
	std::cin >> num;
	puts("");
	std::cout << "result :\n" << fibo(num) << std::endl;
	puts("");
	return 0;
}
