#include <iostream>
using namespace std;
class multiplication
{
	int r1, c1, r2, c2;
	int a[10][10];
	int b[10][10];

public:
	int getdata();
	void multiply();
};
int multiplication::getdata()
{
	int i, j;
	cout
		<< "\nEnter no of rows and columns of matrix 1:";
	cin >> r1 >> c1;
	cout
		<< "\nEnter no of rows and columns of matrix 2:";
	cin >> r2 >> c2;
	if (c1 != r2)
	{
		cout << "Multiplication not possible" << endl;
		return 0;
	}
	else
	{
		cout
			<< "\nEnter the elements of matrix 1 row wise:\n";
		for (i = 0; i < r1; i++)
		{
			for (j = 0; j < c1; j++)
			{
				cin >> a[i][j];
			}
		}
		cout
			<< "\nEnter the elemets of matrix 2 row wise:\n";
		for (i = 0; i < r2; i++)
		{
			for (j = 0; j < c2; j++)
			{
				cin >> b[i][j];
			}
		}
		return 1;
	}
}
void multiplication::multiply()
{

	int i, j, k, c[10][10], sum = 0;
	for (i = 0; i < r1; i++)
	{
		for (j = 0; j < c2; j++)
		{
			for (k = 0; k < r2; k++)
			{
				sum += a[i][k] * b[k][j];
			}
			c[i][j] = sum;
			sum = 0;
		}
	}
	cout
		<< "\nMatrix of multiplication is:";
	for (int a = 0; a < r1; a++)
	{
		cout << endl;
		for (int b = 0; b < c2; b++)
		{
			cout << c[a][b] << " ";
		}
	}
}
int main()
{
	multiplication m;
	int x;
	cout << "OOPS program-4\nSidharth Sahni\n30-IT-19\n";
	x = m.getdata();
	if (x == 1)
	{
		m.multiply();
		cout << endl;
	}
	return 0;
}
