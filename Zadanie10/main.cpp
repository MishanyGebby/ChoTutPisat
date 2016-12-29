#include <iostream>
//cout << "The resulting number: " << des*100+edn*10+sotn << endl;
using namespace std;

int main()
{
    int zdch,thouz, sotn, des, edn;
    cout << "Enter your number: " << endl;
    cin >> zdch;
    thouz = zdch/1000;
    sotn = zdch/100;
    des = (zdch/10)%10;
    edn = zdch%10;
    if (edn == 0 && des == 0 && sotn == 0 && thouz == 0){
        cout << "You was entered zero" << endl;
    }
    if (des == 0 && sotn == 0 && thouz == 0){
                cout << "You was entered the digit number" << endl;
    }
    if (sotn == 0 && thouz == 0){
                cout << "The resulting number: " << edn*10+des << endl;
    }
    if (thouz == 0){
        cout << "The resulting number: " << des*100+edn*10+sotn << endl;
    }
    return 0;
}
