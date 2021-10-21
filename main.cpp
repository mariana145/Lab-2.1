#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a; // вхідний параметр
    double z1; // результат обчислення 1-го виразу
    double z2; // результат обчислення 2-го виразу
    cout << "a = "; cin >> a;
    z1 = (1-2*sin(a)*sin(a))/(1+sin(2*a));
    z2 = (1- tan(a))/(1+ tan(a));
    cout << endl;
    cout << "z1 = " << z1 << endl;
    cout << "z2 = " << z2 << endl;


    cin.get();
        return 0;
}
