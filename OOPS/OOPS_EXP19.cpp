#include <iostream>
using namespace std;
template <class T>
void Swap(T &x, T &y)
{
	T t = x;
	x = y;
	y = t;
}
int main()
{20
	cout << "Program 19\nSidharth Sahni \n30-IT-19\n";
	int m,
		n;
	float a, b;
	char c, d;

	cout << "Enter any two integers" << endl;
	cin >> m >> n;

	cout << "Enter any two floating point numbers" << endl;
	cin >> a >> b;

	cout << "Enter any two characters" << endl;
	cin >> c >> d;

	cout << "BEFORE SWAPPING DATAS ARE: " << endl;
	cout << "m =" << m << "\tn = " << n << endl;
	cout << "a =" << a << "\tb = " << b << endl;
	cout << "c =" << c << "\td = " << d << endl;

	Swap(m, n);
	Swap(a, b);
	Swap(c, d);

	cout << "AFTER SWAPPING DATAS ARE: " << endl;
	cout << "m =" << m << "\tn = " << n << endl;
	cout << "a =" << a << "\tb = " << b << endl;
	cout << "c =" << c << "\td = " << d << endl;

	return 0;
}