#include <iostream>

using namespace std;

int main()
{
    int sum = 0;
    int srok = 0;
    float proc = 0;
    cout << "Vvedite vashu summu vklada: ";
    cin >> sum;
    cout << "Vvedite srok vklada(mes): ";
    cin >> srok;
    switch(srok){
    case 3:
    proc = 9.0;
    break;
    case 6:
    proc = 11.5;
    break;
    case 12:
    proc = 13.5;
    break;
    case 18:
    proc = 15;
    break;
    case 24:
    proc = 18;
    break;
    case 36:
    proc = 24;
    break;
    }
    if (proc == 0){
        cout << "Vi vveli ne pravil'niy srok vklada!";
    }
    int fin;
    fin = sum*(proc/100);
    cout << "Summa budet ravna = " << fin;
    return 0;
}
