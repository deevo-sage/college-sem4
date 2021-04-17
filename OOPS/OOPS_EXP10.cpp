#include <iostream>
using namespace std;
class fibonacci
{
	int f, f1, f2, m;

public:
	fibonacci()
	{
	}
	fibonacci(int n)
	{
		m = n;
	}
	fibonacci(fibonacci &x)
	{
		x.f1 = 0;
		x.f2 = 1;
		cout << "\n The fibonacci series is:\n\n";
		cout << " " << x.f1 << " " << x.f2;
		for (int i = 2; i <= x.m; i++)
		{
			x.f = x.f1 + x.f2;
			cout << " " << x.f;
			x.f1 = x.f2;
			x.f2 = x.f;
		}
	}
};
int main()
{
	char c;
	int n;
	cout << "\n Sidharth Sahni 30-IT-19" << endl;
	cout << "\n FIBONACCI SERIES USING CONSTRUCTOR" << endl;
	cout << "\nEnter the length of series: ";
	cin >> n;
	fibonacci A(n);
	fibonacci B(A);
}
