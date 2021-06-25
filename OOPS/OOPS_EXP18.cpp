#include <iostream>
using namespace std;
class sample
{
	int x;

public:
	void getdata()
	{
		cout << endl
			 << "Enter a number:";
		cin >> x;
	}
	sample operator<(sample &a)
	{
		if (x < a.x)
		{
			cout << endl
				 << x << " is less than " << a.x;
		}
		else
			cout << endl
				 << x << " is greater than " << a.x;
		}
};
int main()
{
	cout << "Program 18\nSidharth Sahni \n30-IT-19\n";
	sample s1,
		s2;
	s1.getdata();
	s2.getdata();
	cout << endl
		 << "Using Relational Operator Overlaoding (<):";
	s1 < s2;
}