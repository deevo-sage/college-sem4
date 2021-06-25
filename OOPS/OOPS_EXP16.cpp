#include <iostream>
using namespace std;
class sample
{
    int x;

public:
    void getdata()
    {
        cout << endl
             << "Enter a number:";
        cin >> x;
    }
    void display()
    {
        cout << endl
             << "Result:" << x;
    }
    sample operator++()
    {
        ++x;
    }
    sample operator--()
    {
        --x;
    }
};
int main()
{
    cout << "Program 16\nSidharth Sahni \n30-IT-19\n";
    sample obj;
    obj.getdata();
    cout << endl
         << "The number entered is:";
    obj.display();
    ++obj;
    cout << endl
         << "Using Unary Increment Operator Overloading:";
    obj.display();
     --obj;
    cout << endl
         << "Using Unary Decrement Operator Overloading:";
    obj.display();
}