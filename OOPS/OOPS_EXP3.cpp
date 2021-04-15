#include <iostream>
using namespace std;

float area(float b, float h)
{
    float ans;
    ans = 0.5 * b * h;
    return ans;
}
float area(float r)
{
    float ans;
    ans = 3.14 * r * r;
    return ans;
}
float area(int l, float w)
{
    float ans;
    ans = l * w;
    return ans;
}
int main()
{
    cout << "OOPS program-3\nSidharth Sahni\n30-IT-19\n";

    int n, l;
    float r, circle, b, h, triangle, w, rectangle;
    cout << "Enter 1 for Triangle\nEnter 2 for Circle\nEnter 3 for Rectangle\n";
    cin >> n;
    switch (n)
    {
    case 1:
        cout << "Enter base & height of the triangle:";
        cin >> b >> h;
        triangle = area(b, h);
        cout << "area =" << triangle;
        break;
    case 2:
        cout << "Enter radius:";
        cin >> r;
        circle = area(r);
        cout << "The area of circle is:" << circle;
        break;
    case 3:
        cout << "Enter the length:";
        cin >> l;
        cout << "Enter the breadth:";
        cin >> w;
        rectangle = area(l, w);
        cout << "The area of rectangle is:" << rectangle;
        break;
    default:
        cout << "Invalid Input";
    }
    return 0;
}
