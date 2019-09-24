#include <iostream>
int b = 5;
int c;

int main() {	
	static const int a = 3;
	int* d = new int[2];
	int e = 6;
	std::cout << "code\t" << (void *) main << std::endl;
	std::cout << "Rodata\t" << (void *) &a << std::endl;
	std::cout << "data\t" << &b << std::endl;
	std::cout << "BSS\t" << &c << std::endl;
	std::cout << "Heap\t" << d << std::endl;
	std::cout << "Stack\t" << &e << std::endl;
	return 0;
}

