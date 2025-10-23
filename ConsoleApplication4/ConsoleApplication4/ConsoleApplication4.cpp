#include <iostream>
#include "windows.h"
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int a, b, c, d;
    cout << "Введіть A = ";
    cin >> a;
    cout << "Введіть B = ";
    cin >> b;
    cout << "Введіть початковий Х = ";
    cin >> c;
    cout << "Введіть кінцевий Х = ";
    cin >> d;
    double y, x = c;
    while (x <= d + 0.01)
    {
        y = a * b + pow(sin(x), 2) - x * (1 / 2);
        cout << "x = " << x << "\t" << "y = " << y << endl;
        x += 0.1;
    }
    system("pause");
    return 0;
}