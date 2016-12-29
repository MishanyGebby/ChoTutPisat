#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>

//

int main(){
	int x,y,z;
	std::cout << "Enter the 3 numbers: ";
	std::cin >> x >> y >> z;
	if (x!=y && y != z && x!=z){
		if ((x+y+z) < 1){
			if (x<y && y<z || x<z && z<y)
				x = (z+y)/2;
			else if (y<x && x<z || y<z && z<x)
				y = (x+z)/2;
			else 
				z = (x+y)/2;
		}
	}
	else {
		if (x<y)
			x=(y+z)/2;
		else
			y=(x+z)/2;
	}
	std::cout << "x = " << x;
	std::cout << "		";
	std::cout << "y = " << y;
	getch();
	return 0;
}