#include <iostream>
using namespace std;
void transpose(int a[10][10], int r, int c)
{
    int transpose[10][10], i, j, k;

    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j)
        {
            transpose[j][i] = a[i][j];
        }

    // Printing the transpose
    cout << "\nTranspose of Matrix: " << endl;
    for (int i = 0; i < c; ++i)
        for (int j = 0; j < r; ++j)
        {
            cout << " " << transpose[i][j];
            if (j == r - 1)
                cout
                     << endl;
        }
}
void addition(int a[10][10], int b[10][10], int r, int c)
{
    int mul[10][10], i, j, k;
    cout << "addition of the matrix=\n";
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            mul[i][j] = a[i][j] + b[i][j];
        }
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cout << mul[i][j] << " ";
        }
        cout << "\n";
    }
}
void multi(int a[10][10], int b[10][10], int r, int c)
{
    int mul[10][10], i, j, k;
    cout << "multiply of the matrix=\n";
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            mul[i][j] = 0;
            for (k = 0; k < c; k++)
            {
                mul[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cout << mul[i][j] << " ";
        }
        cout << "\n";
    }
}
int main()
{
    int a[10][10], b[10][10], mul[10][10], r, c, i, j, k;
    cout << "enter the number of row=";
    cin >> r;
    cout << "enter the number of column=";
    cin >> c;
    cout << "enter the first matrix element=\n";
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "enter the second matrix element=\n";
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cin >> b[i][j];
        }
    }
    multi(a, b, r, c);
    addition(a, b, r, c);
    transpose(a,r,c);
    transpose(b,r,c);

    return 0;
}
