
#include <iostream>
#include <math.h>
using namespace std;

double f(double x)
{
    double a = 1 / (1 + x);
    return a;
}

void Trapezoidal(double a, double b, double h)
{
    double d = f(a) + f(b);

    for (double i = a + h; i < b; i += h)
    {
        d += 2 * f(i);
    }
    d = d * h / 2;
    cout << "The integral of the equation is "
         << d << "\n";
}
int main()
{
    cout << "\nAM experiment 4\nTrapezoidal Rule   \nSidharth sahni 30 - IT - 19\n";

    cout.precision(5);
    double a, b, n, h;

    cout << "lower limit=";
    cin >> a;
    cout << "upper limit=";
    cin >> b;
    cout << "number of intervals=";
    cin >> n;
    h = abs((b - a)) / n;
    Trapezoidal(a, b, h);
    return 0;
}