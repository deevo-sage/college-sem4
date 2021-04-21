#include <iostream>
using namespace std;
class complex
{
	float x, y;

public:
	complex() {}
	complex(float a)
	{
		x = y = a;
	}
	complex(float r, float img)
	{
		x = r;
		y = img;
	}
	friend complex sum(complex c1, complex c2)
	{
		complex a;
		a.x = c1.x + c2.x;
		a.y = c1.y + c2.y;
		return (a);
	}
	void display()
	{
		cout << x << " "
			 << "+j"
			 << y << endl;
	}
};
int main()
{
	cout << "Program 9\nSidharth Sahni \n30-IT-19" << endl;
	complex c1(3.0, 4.3);
	complex c2(7.1, 9.1);
	complex c3;
	c3 = sum(c1, c2);
	cout << "c1=";
	c1.display();
	cout << "c2=";
	c2.display();
	cout << "c1+c2=";
	c3.display();
}
