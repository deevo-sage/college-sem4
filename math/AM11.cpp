#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
#define h 0.1

double f(double x, double y)
{
    return x - y * y;
}

double f2(double x, double y)
{
    return 1 - 2 * y * f(x, y);
}

double f3(double x, double y)
{
    return (-2) * f(x, y) * f(x, y) - 2 * y * f2(x, y);
}

double f4(double x, double y)
{
    return -6 * f(x, y) * f2(x, y) - 2 * y * f3(x, y);
}

void taylor(double x, double y[])

{
    int i;
    cout << "i\t\tx\t\ty " << endl;
    for (i = 0; i <= 1; i++)
    {
        y[i + 1] = y[i] + h * f(x, y[i]) + (h * h / 2) * f2(x, y[i]) + (pow(h, 3) / 6) * f3(x, y[i]) + (pow(h, 4) / 24) * f4(x, y[i]);
        cout << i << "\t\t" << setprecision(1) << fixed << x << "\t\t" << setprecision(4) << fixed << y[i] << endl;
        x = x + h;
    }
}
int main()
{
    double x0, y[100];
    cout << "\nAM experiment 11\nTaylor series method\nSidharth sahni 30 - IT - 19\n";
    cout << "Enter x and y: ";
    cin >> x0 >> y[0];
    taylor(x0, y);
    return 0;
}