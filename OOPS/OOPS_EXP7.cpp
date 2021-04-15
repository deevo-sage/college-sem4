#include <iostream>

using namespace std;

class point
{
public:
    int x, y;
    point()
    {
        x = 10;
        y = 20;
        cout << "\nconstructor called";
    }
    point(int a, int b)
    {
        x = a;
        y = b;
        cout << "\nparameterised constructor called";
    }
    point(const point &p)
    {
        x = p.x;
        y = p.y;
        cout << "\ncopy constructor called";
    }
    void getval()
    {
        cout << endl
             << x << " " << y << endl;
    }
    ~point()
    {
        cout << "destructor called\n";
    }
};

int main()
{
    cout << "OOPS program-7\nSidharth Sahni\n30-IT-19\n";
    point a;
    a.getval();
    point b(5, 4);
    b.getval();
    point c = b;
    c.getval();
    return 0;
}