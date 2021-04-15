#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

double f(double x)
{
    double a = pow(x, 3) + 2 * x - 2;
    return a;
}

void RegulaFalsi(double a, double b, double acc)
{
    int i = 1;
    double c, fa, fb, fc;
    while (fabs(f(c)) >= acc)
    {
        fa = f(a);
        fb = f(b);
        fc = f(c);
        c = (a * fb - b * fa) / (fb - fa);
        cout << "itteration=" << i << "  a=" << a << "  b=" << b << "  c=" << c << "  f(c)=" << fc << "\n";
        if (fc == 0)
        {
            break;
        }
        if (fa * fc > 0)
        {
            a = c;
        }
        else
        {
            b = c;
        }
        i++;
    }
    cout << "The root of the equation is " << c << "\n";
}
int main()
{
    cout << "\nAM experiment 22\nRegula Falsi\nSidharth sahni 30 - IT - 19\n";

    cout.precision(5);
    double a, b, acc;

    cout << "Enter the initial guesses:\na=";
    cin >> a;
    cout << "b=";
    cin >> b;
    cout << "desired accuracy=";
    cin >> acc;

    RegulaFalsi(a, b, acc);
    return 0;
}