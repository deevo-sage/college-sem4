#include <iostream>
using namespace std;

class fact
{
    int n, factorial = 1;

public:
    fact(int a)
    {
        n = a;
        for (int i = 1; i <= a; i++)
        {
            factorial *= i;
        }
    }

    void displaydata()
    {
        cout << "factorial of " << n << " is " << factorial << endl;
    }
};

int main()
{
    int n;
    cout << "Progam 8 \nSidharth Sahni \n30-IT-19 \n";
    cout << "enter number :";
    cin >> n;
    fact a(n);
    a.displaydata();
}