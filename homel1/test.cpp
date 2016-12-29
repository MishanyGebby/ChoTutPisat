
#include <conio.h>
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a;
    float x,x1,x2,D;
    cout << "Vvedite a: " << endl;
    cin >> a;
    if (a == 0 || a > 1 || a < -1)
        cout << "a != 0 || a !> 1 || a !< -1";
       else
    {
    D = 16 - 4*a*(3*a+1);
    D = sqrt(D);
    x1 = (4 + D)/2*a;
    x2 = (4 - D)/2*a;
    cout << "x1 > " << x1 << endl;
    cout << "x2 > " << x2 << endl;
    }
    getch();
    return 0;
}