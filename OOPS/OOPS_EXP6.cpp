#include <iostream>

using namespace std;

int main()
{
    int *point_int;
    float *point_float;
    point_int = new int;
    point_float = new float;
    *point_int = 10;
    *point_float = 25.560;
    cout << "OOPS program-6\nSidharth Sahni\n30-IT-19\n";
    cout << "output:\n";
    cout << *point_int << endl
         << *point_float << endl;
    delete point_int;
    delete point_float;
    return 1;
}