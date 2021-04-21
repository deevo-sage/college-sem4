#include <iostream>
using namespace std;
class B;
class A
{
      int x;

public:
      void getdata()
      {
            cout << endl
                 << "Enter the value of x:";
            cin >> x;
      }
      friend void greatest(A, B);
};
class B
{
      int y;

public:
      void getdata()
      {
            cout << endl
                 << "Enter the value of y:";
            cin >> y;
      }
      friend void greatest(A, B);
};
void greatest(A a, B b)
{
      if (a.x >= b.y)
            cout << endl
                 << "Greatest of two numbers x and y is:" << a.x;
      else
            cout << endl
                 << "Greatest of two numbers x and y is:" << b.y;
}
int main()
{
      cout << "Program 12\nSidharth Sahni \n30-IT-19\n";
      A a;
      a.getdata();
      B b;
      b.getdata();
      greatest(a, b);
}
