#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

double f(double x)
{
    double a = pow(x, 3) - 3 * x - 5.0;
    return a;
}
double fdash(double x)
{
    double a = 3 * pow(x, 2) - 3;
    return a;
}
void NewtonRaphson(double x, double acc)
{
    int i = 1;
    double xnew;
    while (abs(f(x) / fdash(x)) >= acc)
    {
        xnew = x - f(x) / fdash(x);
        cout << "itteration=" << i << "  x=" << x << "  f(x)=" << f(x) << "  f'(x)=" << fdash(x) << "  xnew=" << xnew << "\n";
        x = xnew;
        i++;
    }
    cout << "The root of the equation is " << x << "\n";
}
int main()

{
    cout << "\nAM experiment 3\nNewton Raphson\nSidharth sahni 30 - IT - 19\n";

    cout.precision(7);
    double a, acc;

    cout << "Enter the initial guesses:\na=";
    cin >> a;
    cout << "desired accuracy=";
    cin >> acc;

    NewtonRaphson(a, acc);
    return 0;
}