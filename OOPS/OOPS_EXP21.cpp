#include <iostream>
using namespace std;
template <class T>
void print(T x)
{
	cout
		<< x << endl;
}
template <class T>
void print(T x, int y)
{
	for (int i = 0; i < y; i++)
	{
		cout
			<< x << endl;
	}
}
int main()
{
	cout << "Program 21\nSidharth Sahni \n30-IT-19\n";

	print(7);
	print("I depend onm second arg", 3);
	print(3);
	print(700, 2);
}