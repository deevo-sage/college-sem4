#include <iostream>
using namespace std;
unsigned long int factorial(int n)
{
	if (n == 0)
		return 1;
	else
		return n * factorial(n - 1);
}
int main()
{
	int a;
	cout << "OOPS program-1\nSidharth Sahni\n30-IT-19\n";

	cout << "Enter the number: " << endl;
	cin >> a;
	cout << "Factorial of " << a << " is:" << factorial(a);
	return 0;
}