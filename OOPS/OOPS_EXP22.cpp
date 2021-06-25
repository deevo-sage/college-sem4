#include <iostream>
using namespace std;

template <typename T>

T myMax(T x, T y)
{
	return (x > y) ? x : y;
}
int main()
{
	cout << "Program 22\nSidharth Sahni \n30-IT-19\n";

	cout
		<< myMax<int>(21, 6) << endl;

	cout << myMax<double>(17.0, 4.0) << endl;

	cout << myMax<char>('b', 'z') << endl;

	return 0;
}
