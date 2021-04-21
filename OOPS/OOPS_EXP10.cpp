#include <iostream>
using namespace std;
class fibonacci
{
	int n;

public:
	fibonacci()
	{
	}
	fibonacci(int x)
	{
		n = x;
	}
	fibonacci(fibonacci &x)
	{
		int a = 0, b = 1, temp;
		cout << "\n The fibonacci series is:\n\n";
		cout << " " << a << " " << b;
		for (int i = 2; i <= x.n; i++)
		{
			temp = a + b;
			cout << " " << temp;
			a = b;
			b = temp;
		}
	}
};
int main()
{
	char c;
	int n;
	cout << "Program 10\nSidharth Sahni \n30-IT-19" << endl;
	cout << "\nenter n: ";
	cin >> n;
	fibonacci A(n);
	fibonacci B(A);
}
