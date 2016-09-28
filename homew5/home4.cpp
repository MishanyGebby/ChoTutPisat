#include <iostream>

int main(){
	int a, x;
	float b;
	std::cout << "Enter a number: ";
	std::cin >> a;
	b = 3 / (a - 1);
	std::cout << "x <= " << b;
	std::cin >> x;
	return 0;
}