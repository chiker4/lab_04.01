// Lab_04_01.cpp
// <Чикеречко Андрій>
// Лабораторна робота № 4.2
// Цикли.
// Варіант 19
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double x, xp, xk, dx, A, B, y;

    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;

    cout << fixed;
    cout << "---------------------------" << endl;
    cout << "|" << setw(7) << "x" << " |"
        << setw(11) << "y" << " |" << endl;
    cout << "---------------------------" << endl;

    x = xp;
    while (x <= xk)
    {
        A = 2 * x - 13.5;
        if (x < -1) {
            B = sin(x) / (cos(x) * cos(x) + 1);
        }
        else if (x >= -1 && x <= 1) {
            B = cos(sin(x) * sin(x)) * cos(sin(x) * sin(x)) - 1;
        }
        else {
            B = log10(x + 0.4);
        }
        y = A - B;
        cout << "|" << setw(7) << setprecision(2) << x
            << " |" << setw(11) << setprecision(3) << y
            << " |" << endl;
        x += dx;
    }
    cout << "---------------------------" << endl;

    return 0;
}
