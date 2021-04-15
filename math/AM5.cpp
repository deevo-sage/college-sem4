#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
double f(double x)
{
    double a = pow(x, 0.5) * exp(-x);
    return a;
}

void simpson(double a, double b, double h)
{
    double d = f(a) + f(b);
    int j = 1;
    for (double i = a + h; i < b; i += h, j++)
    {
        if (j % 2 == 0)
        {
            d += 2 * f(i);
        }
        else
        {
            d += 4 * f(i);
        }
    }
    d = d * h / 3;
    cout << "The integral of the equation is "
         << d << "\n";
}
int main()
{
    cout << "\nAM experiment 5\nSimpsons 1/3   \nSidharth sahni 30 - IT - 19\n";

    cout.precision(5);
    double a, b, n, h;

    cout << "lower limit=";
    cin >> a;
    cout << "upper limit=";
    cin >> b;
    cout << "number of intervals=";
    cin >> n;
    h = abs((b - a)) / n;
    simpson(a, b, h);
    return 0;
}
