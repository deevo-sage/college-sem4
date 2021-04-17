#include<iostream>
using namespace std;
class complex{
	float x,y;
	public:
		complex(){}
		complex(float a)
		{
			x=y=a;
		}
		complex(float r,float img)
		{
			x=r;
			y=img;
		}
		friend complex sum(complex c2,complex c3)
		{
			complex a;
			a.x=c2.x+c3.x;
			a.y=c2.y+c3.y;
			return(a);
		}
		void display(complex c)
		{
			cout<<c.x<<" "<<"+j"<<" "<<c.y;
		}
};
int main()
{
	cout<<"\n Sidharth Sahni 30-IT-19"<<endl;
	cout<<"\n ADDITION OF TWO COMPLEX NUMBER"<<endl;
	complex c1;
	complex c2(6,8.9);
	complex c3(9.7,8.9);
	complex c4,c5;
	c4=sum(c2,c3);
	cout<<"First Complex Number:C1=";
	c5.display(c2);
	cout<<endl<<"Second Complex Number:C2=";
	c5.display(c3);
	cout<<endl<<"Resultant:C=C1+C2=";
	c5.display(c4);
}
