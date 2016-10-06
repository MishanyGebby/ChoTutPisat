#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

int main(){
int a, b, c, d, n, m;
cout << "a: " << endl;
cin >> a;
cout << "b: " << endl;
cin >> b;
cout << "c: " << endl;
cin >> c;
cout << "d: " << endl;
cin >> d;
cout << "n: " << endl;
cin >> n;
cout << "m: " << endl;
cin >> m;

if (n>=a && n<=c){
	if (c==n){
		if (m<=d){
			cout << "Uspel!" << endl;
		}
		else
			cout << "Ne uspel!" << endl;
	}
}
else 
	cout << "Ne uspel!" << endl;
getch();
return 0;
}