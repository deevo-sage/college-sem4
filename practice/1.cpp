#include <iostream>
#include <math.h>
int f(int a)
{
    return a * a * a + 2 * a - 5;
}
int itterate(float a, float b, int count)
{
    float c = (a + b) / 2, m = 0, x;
    if (f(a) * f(c) < m)
        x = itterate(a, c, count + 1);
    else
        x = itterate(c, b, count + 1);
    return x;
}
int main()
{
    float a, b, c;
    std::cin >> a >> b;
    if (f(a) * f(b) < 0)
        c = itterate(a, b, 0);
    else
        c = -99;
    if (c != -99)
        std::cout << a << "  " << b << "  " << c;
    else
        std::cout << "error";
    return 0;
}
