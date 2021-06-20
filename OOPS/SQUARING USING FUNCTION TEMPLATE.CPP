#include<iostream>
using namespace std;
template <class T>
void Square(T &x)
{
    T t;
    t= x*x;
	cout<<t<<endl;   
}
int main()
{
	cout<<"\t\t\tVISHAL DANGAICH \n\t\t\t02-IT-19"<<endl;
	cout<<"\t\t\tSQUARE OF DATA USING FUNCTION TEMPLATE "<<endl;
	
    int m;
    float a;
    double c;
    
    cout<<"\nEnter any integer"<<endl;
    cin>>m;
    
    cout<<"\nEnter any floating point number"<<endl;
    cin>>a;
    
    cout<<"\nEnter any double point number"<<endl;
    cin>>c;
    
    cout<<"\nSquare of integer ="<<endl;
    Square(m);
     
    cout<<"\nSquare of floating point ="<<endl;
    Square(a);
    
    cout<<"\nSquare of double point  ="<<endl;
    Square(c);
    
    return 0;
}
