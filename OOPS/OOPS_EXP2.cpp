#include <iostream>
using namespace std;
#define MAX(a, b) (a > b) ? a : b
int main()
{
	int x, y, z, ans1, ans2;
	cout << "OOPS program-2\nSidharth Sahni\n30-IT-19\n";

	cout << "Enter the three numbers:";
	cin >> x >> y >> z;
	ans1 = MAX(x, y);
	ans2 = MAX(z, ans1);
	cout << "The largest number is " << ans2 << endl;
	return 0;
}