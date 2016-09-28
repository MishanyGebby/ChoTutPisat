#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(){
	int a;
	float x1,x2,d;
	std::cout << "Enter the a: ";
	std::cin >> a;
	if (a != 1)
	{
	d = (a+2)*(a+2)-4*(a-1)*(a-2);
	x1 = (-(a+2)+sqrt(d))/(2*(a-1));
	x2 = (-(a+2)-sqrt(d))/(2*(a-1));
	std::cout << "x1 = " << x1 << " ";
	std::cout << "x2 = " << x2;
}
else 
	std::cout << "a != 1";
	getch();
	return 0;
}