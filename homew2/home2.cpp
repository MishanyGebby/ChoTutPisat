#include <iostream>
#include <stdio.h>
#include <conio.h>

int main(){
	int a1,b1,c1,a2,b2,c2;
	float x,y;
	std::cout << "Enter a1, b1, c1: ";
	std::cin >> a1;
	std::cin >> b1;
	std::cin >> c1;
	std::cout << "Enter a2, b2, c2: ";
	std::cin >> a2;
	std::cin >> b2;
	std::cin >> c2;
	if (a1 * b2 == a2 * b1){
		std::cout << "Praymie parallel'ni (||) ili sovpadaut";
	}
	else if (a1 * b2 != a2 *b1){
		y = (-c2*a1 + a2*c1)/(-a2*b1 + b2*a1);
		x = (-c1-b1*y)/a1;
		std::cout << "Tochka peresecheniya pryamih: A(";
		std::cout << x;
		std::cout << ";";
		std::cout << y;
		std::cout << ")";
	}
	getch();
	return 0;
}