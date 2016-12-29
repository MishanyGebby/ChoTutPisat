//не работающий как надо код!

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>
using namespace std;

int main(){
	const unsigned int DIM1 = 8;
	const unsigned int DIM2 = 8;
	
	int array1[DIM1] = {1, 2, 2, 1,-1,-2,-2,-1};
	int array2[DIM2] = {2, 1,-1,-2,-2,-1, 1, 2};
	
	int N;
	cout << "Kol-vo testow: " << "\t" << endl;
	cin >> N;
	for (int i=0; i<N;i++){
		
		cout << "Index: " << endl;
	
	char str[1];
	cin >> str;
	int xx = (int) str[0] - (int)'a';
	int yy = (int) str[1] - (int)'0';
	
	int count;

	for (int m=0;m<DIM1;m++){
		if ((0<=(xx + array1[m])) && ((xx + array1[m])<9)
		 && ((0<=(yy+array2[m])) && ((yy+array2[m])<9)))
			count += 1;
	}

	cout << "Kletok pod atakoy: " << "\t" << count << "\n";
	getchar();
	return 0;
	}	

}