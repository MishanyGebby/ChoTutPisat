// zadanie11MVZ.cpp: определяет точку входа для консольного приложения.
//

#include <conio.h>
#include <iostream>
#include <cmath>
using namespace std;



int main()
{
        int n = 0;
        cout << "Enter the n: " << endl;
        cin >> n;
        float array[n];
        for (int k = 0; k < n; k++){
                cout << "Enter the element of array: ";
                cin >> array[k];
        }
        int maxmod = 0;
        float count = 0;
        int counter = 0; ///Переменнная для сравнения элементов массива
        for (int i = 0; i < n; i++){
                if (abs(array[i])>abs(counter)){
                        counter = array[i];
                        maxmod = i; ///Нахождение самого большого по модулю элемента массива
                }
                if (array[i] > 0){
                        count += array[i]; ///Сумма всех элементов после первого положительного элемента
                }
        }
        cout << "Nomer samogo bol'shogo po modulu elementa: " << maxmod+1 << endl;
        cout << "Summa elementov posle pervogo polojitelnogo 4isla: " << count << endl;
        float a, b;
        cout << "Enter the interval (from a to b): " << endl;
        cin >> a >> b; // Доделать!!!

        cout << "The new array: " << endl;
        }
        return 0;
}
