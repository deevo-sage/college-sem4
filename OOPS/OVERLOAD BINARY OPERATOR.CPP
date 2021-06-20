#include<iostream>
using namespace std;
class binary {
int x;
public:
void getdata()
{
cout<<endl<<"Enter a number:";
cin>>x;
}
void display()
{
cout<<endl<<"Result:"<<x<<"\n";
}
friend binary operator +(binary &b,binary &c)
{
binary d;
d.x=b.x+c.x;
return(d);
}
friend binary operator -(binary &b,binary &c)
{
binary d;
d.x=b.x-c.x;
return(d);
}
friend binary operator *(binary &b,binary &c)
{
binary d;
d.x=b.x*c.x;
return(d);
}
friend binary operator /(binary &b,binary &c)
{
binary d;
d.x=b.x/c.x;
return(d);
}
};
int main()
{
	cout<<"\t\t\tVISHAL DANGAICH \n\t\t\t02-IT-19"<<endl;
	cout<<"\t\t\tOVERLOAD BINARY OPERATOR "<<endl;
binary b1,b2,b3,b4;
b1.getdata();
b2.getdata();
cout<<endl<<"Using Binary Operator Overlaoding (+):";
b3=b1+b2;
b3.display();
cout<<endl<<"Using Binary Operator Overlaoding (-):";
b3=b1-b2;
b3.display();
cout<<endl<<"Using Binary Operator Overlaoding (*):";
b3=b1*b2;
b3.display();
cout<<endl<<"Using Binary Operator Overlaoding (/):";
b3=b1/b2;
b3.display();
}
